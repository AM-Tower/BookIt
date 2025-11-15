using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Threading.Tasks;
using BookIt.Models;

namespace BookIt.Services
{
    /// <summary>
    /// Service for managing BookIt projects including creation, loading, saving, and recent projects tracking.
    /// </summary>
    public class ProjectService : IProjectService
    {
        private readonly string _recentProjectsPath;
        private const int MaxRecentProjects = 10;

        public ProjectService()
        {
            var appDataPath = Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData);
            _recentProjectsPath = Path.Combine(appDataPath, "BookIt", "recent_projects.json");
        }

        public async Task<Project> CreateProjectAsync(string projectName, string projectPath)
        {
            if (string.IsNullOrWhiteSpace(projectName) || string.IsNullOrWhiteSpace(projectPath))
                throw new ArgumentException("Project name and path cannot be empty");

            var fullPath = Path.Combine(projectPath, projectName);
            var docsPath = Path.Combine(fullPath, "Documents");

            Directory.CreateDirectory(docsPath);
            Directory.CreateDirectory(Path.Combine(fullPath, ".backups"));

            var project = new Project
            {
                Name = projectName,
                CreatedAt = DateTime.UtcNow,
                ModifiedAt = DateTime.UtcNow,
                Documents = new List<Document>(),
                Settings = new ProjectSettings
                {
                    Theme = "Light",
                    FontFamily = "Consolas",
                    FontSize = 12,
                    AutoSaveIntervalSeconds = 60,
                    BookFormat = "6x9",
                    IndentationSize = 4,
                    WordWrapEnabled = true,
                    CustomVariables = new Dictionary<string, string>()
                }
            };

            project.RootPath = fullPath;
            await SaveProjectAsync(project);
            await AddToRecentProjectsAsync(fullPath);

            return project;
        }

        public async Task<Project> LoadProjectAsync(string projectPath)
        {
            if (!Directory.Exists(projectPath))
                throw new DirectoryNotFoundException(string.Format("Project directory not found: {0}", projectPath));

            var projectJsonPath = Path.Combine(projectPath, "project.json");
            if (!File.Exists(projectJsonPath))
                throw new FileNotFoundException(string.Format("Project metadata file not found: {0}", projectJsonPath));

            var jsonContent = await File.ReadAllTextAsync(projectJsonPath);
            var context = new BookItJsonSerializerContext();
            var project = JsonSerializer.Deserialize<Project>(jsonContent, context.Project);

            if (project == null)
                throw new InvalidOperationException("Failed to deserialize project metadata");

            project.Name = Path.GetFileName(projectPath);

            var documentsPath = Path.Combine(projectPath, "Documents");
            if (Directory.Exists(documentsPath))
            {
                var documentFiles = Directory.GetFiles(documentsPath, "*.json");
                foreach (var docFile in documentFiles)
                {
                    try
                    {
                        var docJson = await File.ReadAllTextAsync(docFile);
                        var document = JsonSerializer.Deserialize<Document>(docJson, context.Document);
                        if (document != null)
                            project.Documents.Add(document);
                    }
                    catch (Exception ex)
                    {
                        System.Diagnostics.Debug.WriteLine(string.Format("Error loading document {0}: {1}", docFile, ex.Message));
                    }
                }
            }

            project.ModifiedAt = DateTime.UtcNow;
            await AddToRecentProjectsAsync(projectPath);

            return project;
        }

        public async Task<bool> SaveProjectAsync(Project project)
        {
            if (project == null)
                throw new ArgumentNullException(nameof(project));

            var projectPath = string.IsNullOrWhiteSpace(project.RootPath)
                ? throw new ArgumentException("Project.RootPath must be set before saving")
                : project.RootPath;

            var documentsPath = Path.Combine(projectPath, "Documents");
            Directory.CreateDirectory(documentsPath);

            project.ModifiedAt = DateTime.UtcNow;
            var projectJsonPath = Path.Combine(projectPath, "project.json");
            var context = new BookItJsonSerializerContext();
            var projectJson = JsonSerializer.Serialize(project, context.Project);
            await File.WriteAllTextAsync(projectJsonPath, projectJson);

            foreach (var document in project.Documents)
            {
                var docFileName = Path.Combine(documentsPath, string.Format("{0}.json", document.Id));
                var docJson = JsonSerializer.Serialize(document, context.Document);
                await File.WriteAllTextAsync(docFileName, docJson);
            }

            return true;
        }

        public async Task<List<string>> GetRecentProjectsAsync()
        {
            if (!File.Exists(_recentProjectsPath))
                return new List<string>();

            try
            {
                var json = await File.ReadAllTextAsync(_recentProjectsPath);
                var context = new BookItJsonSerializerContext();
                var projects = JsonSerializer.Deserialize<List<string>>(json, context.ListString) ?? new List<string>();
                return projects;
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine(string.Format("Error reading recent projects: {0}", ex.Message));
                return new List<string>();
            }
        }

        public async Task<bool> AddDocumentAsync(Project project, Document document)
        {
            if (project == null)
                throw new ArgumentNullException(nameof(project));
            if (document == null)
                throw new ArgumentNullException(nameof(document));

            project.AddDocument(document);
            if (!string.IsNullOrWhiteSpace(project.RootPath))
            {
                await SaveProjectAsync(project);
            }

            return true;
        }

        public async Task<bool> RemoveDocumentAsync(Project project, string documentId)
        {
            if (project == null)
                throw new ArgumentNullException(nameof(project));
            if (string.IsNullOrWhiteSpace(documentId))
                throw new ArgumentException("Document ID cannot be empty");

            var removed = project.RemoveDocument(documentId);
            if (removed && !string.IsNullOrWhiteSpace(project.RootPath))
            {
                await SaveProjectAsync(project);
            }

            return removed;
        }

        private async Task AddToRecentProjectsAsync(string projectPath)
        {
            try
            {
                var recentProjects = await GetRecentProjectsAsync();
                recentProjects.Remove(projectPath);
                recentProjects.Insert(0, projectPath);

                if (recentProjects.Count > MaxRecentProjects)
                    recentProjects = recentProjects.Take(MaxRecentProjects).ToList();

                Directory.CreateDirectory(Path.GetDirectoryName(_recentProjectsPath) ?? string.Empty);

                var context = new BookItJsonSerializerContext();
                var json = JsonSerializer.Serialize(recentProjects, context.ListString);
                await File.WriteAllTextAsync(_recentProjectsPath, json);
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine(string.Format("Error updating recent projects: {0}", ex.Message));
            }
        }
    }
}
