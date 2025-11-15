using System.Diagnostics.CodeAnalysis;
using System.Text.Json;
using System.Text.Json.Serialization;
using BookIt.Models;


<<<<<<< TODO: Unmerged change from project 'BookIt(net10.0-ios)', Before:
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
                    Font = "Segoe UI",
                    FontSize = 12,
                    AutoSave = true,
                    AutoSaveInterval = 60000,
                    BookFormat = "Standard",
                    IndentationType = "Spaces",
                    IndentationSize = 4,
                    WordWrap = true,
                    CustomVariables = new Dictionary<string, string>()
                }
            };

            // Set root path on project and persist
            project.RootPath = fullPath;
            var saved = await SaveProjectAsync(project);
            await AddToRecentProjectsAsync(fullPath);

            return project;
        }

        public async Task<Project> LoadProjectAsync(string projectPath)
        {
            if (!Directory.Exists(projectPath))
                throw new DirectoryNotFoundException($"Project directory not found: {projectPath}");

            var projectJsonPath = Path.Combine(projectPath, "project.json");
            if (!File.Exists(projectJsonPath))
                throw new FileNotFoundException($"Project metadata file not found: {projectJsonPath}");

            var jsonContent = await File.ReadAllTextAsync(projectJsonPath);
            var project = JsonSerializer.Deserialize<Project>(jsonContent, GetJsonSerializerOptions());

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
                        var document = JsonSerializer.Deserialize<Document>(docJson, GetJsonSerializerOptions());
                        if (document != null)
                            project.Documents.Add(document);
                    }
                    catch (Exception ex)
                    {
                        System.Diagnostics.Debug.WriteLine($"Error loading document {docFile}: {ex.Message}");
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
            var projectJson = JsonSerializer.Serialize(project, GetJsonSerializerOptions());
            await File.WriteAllTextAsync(projectJsonPath, projectJson);

            foreach (var document in project.Documents)
            {
                var docFileName = Path.Combine(documentsPath, $"{document.Id}.json");
                var docJson = JsonSerializer.Serialize(document, GetJsonSerializerOptions());
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
                var projects = JsonSerializer.Deserialize<List<string>>(json) ?? new List<string>();
                return projects;
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine($"Error reading recent projects: {ex.Message}");
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
            // Persist project changes if RootPath is set
            if (!string.IsNullOrWhiteSpace(project.RootPath))
            {
                await SaveProjectAsync(project);
            }
            return await Task.FromResult(true);
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

            return await Task.FromResult(removed);
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

                var json = JsonSerializer.Serialize(recentProjects, GetJsonSerializerOptions());
                await File.WriteAllTextAsync(_recentProjectsPath, json);
            }
            catch (Exception ex)
            {
                System.Diagnostics.Debug.WriteLine($"Error updating recent projects: {ex.Message}");
            }
        }

        private static JsonSerializerOptions GetJsonSerializerOptions()
        {
            return new JsonSerializerOptions
            {
                WriteIndented = true,
                PropertyNameCaseInsensitive = true,
                DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull
            };
        }
=======
namespace BookIt.Services;

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
                Font = "Segoe UI",
                FontSize = 12,
                AutoSave = true,
                AutoSaveInterval = 60000,
                BookFormat = "Standard",
                IndentationType = "Spaces",
                IndentationSize = 4,
                WordWrap = true,
                CustomVariables = new Dictionary<string, string>()
            }
        };

        // Set root path on project and persist
        project.RootPath = fullPath;
        var saved = await SaveProjectAsync(project);
        await AddToRecentProjectsAsync(fullPath);

        return project;
    }

    [RequiresUnreferencedCode()]
    public async Task<Project> LoadProjectAsync(string projectPath)
    {
        if (!Directory.Exists(projectPath))
            throw new DirectoryNotFoundException($"Project directory not found: {projectPath}");

        var projectJsonPath = Path.Combine(projectPath, "project.json");
        if (!File.Exists(projectJsonPath))
            throw new FileNotFoundException($"Project metadata file not found: {projectJsonPath}");

        var jsonContent = await File.ReadAllTextAsync(projectJsonPath);
        var project = JsonSerializer.Deserialize<Project>(jsonContent, GetJsonSerializerOptions());

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
                    var document = JsonSerializer.Deserialize<Document>(docJson, GetJsonSerializerOptions());
                    if (document != null)
                        project.Documents.Add(document);
                }
                catch (Exception ex)
                {
                    System.Diagnostics.Debug.WriteLine($"Error loading document {docFile}: {ex.Message}");
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
        var projectJson = JsonSerializer.Serialize(project, GetJsonSerializerOptions());
        await File.WriteAllTextAsync(projectJsonPath, projectJson);

        foreach (var document in project.Documents)
        {
            var docFileName = Path.Combine(documentsPath, $"{document.Id}.json");
            var docJson = JsonSerializer.Serialize(document, GetJsonSerializerOptions());
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
            var projects = JsonSerializer.Deserialize<List<string>>(json) ?? new List<string>();
            return projects;
        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine($"Error reading recent projects: {ex.Message}");
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
        // Persist project changes if RootPath is set
        if (!string.IsNullOrWhiteSpace(project.RootPath))
        {
            await SaveProjectAsync(project);
        }
        return await Task.FromResult(true);
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

        return await Task.FromResult(removed);
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

            var json = JsonSerializer.Serialize(recentProjects, GetJsonSerializerOptions());
            await File.WriteAllTextAsync(_recentProjectsPath, json);
        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine($"Error updating recent projects: {ex.Message}");
        }
    }

    private static JsonSerializerOptions GetJsonSerializerOptions()
    {
        return new JsonSerializerOptions
        {
            WriteIndented = true,
            PropertyNameCaseInsensitive = true,
            DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull
        };
>>>>>>> After
namespace BookIt.Services;

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
                Font = "Segoe UI",
                FontSize = 12,
                AutoSave = true,
                AutoSaveInterval = 60000,
                BookFormat = "Standard",
                IndentationType = "Spaces",
                IndentationSize = 4,
                WordWrap = true,
                CustomVariables = new Dictionary<string, string>()
            }
        };

        // Set root path on project and persist
        project.RootPath = fullPath;
        var saved = await SaveProjectAsync(project);
        await AddToRecentProjectsAsync(fullPath);

        return project;
    }

    public async Task<Project> LoadProjectAsync(string projectPath)
    {
        if (!Directory.Exists(projectPath))
            throw new DirectoryNotFoundException($"Project directory not found: {projectPath}");

        var projectJsonPath = Path.Combine(projectPath, "project.json");
        if (!File.Exists(projectJsonPath))
            throw new FileNotFoundException($"Project metadata file not found: {projectJsonPath}");

        var jsonContent = await File.ReadAllTextAsync(projectJsonPath);
        var project = JsonSerializer.Deserialize<Project>(jsonContent, GetJsonSerializerOptions());

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
                    var document = JsonSerializer.Deserialize<Document>(docJson, GetJsonSerializerOptions());
                    if (document != null)
                        project.Documents.Add(document);
                }
                catch (Exception ex)
                {
                    System.Diagnostics.Debug.WriteLine($"Error loading document {docFile}: {ex.Message}");
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
        var projectJson = JsonSerializer.Serialize(project, GetJsonSerializerOptions());
        await File.WriteAllTextAsync(projectJsonPath, projectJson);

        foreach (var document in project.Documents)
        {
            var docFileName = Path.Combine(documentsPath, $"{document.Id}.json");
            var docJson = JsonSerializer.Serialize(document, GetJsonSerializerOptions());
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
            var projects = JsonSerializer.Deserialize<List<string>>(json) ?? new List<string>();
            return projects;
        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine($"Error reading recent projects: {ex.Message}");
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
        // Persist project changes if RootPath is set
        if (!string.IsNullOrWhiteSpace(project.RootPath))
        {
            await SaveProjectAsync(project);
        }
        return await Task.FromResult(true);
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

        return await Task.FromResult(removed);
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

            var json = JsonSerializer.Serialize(recentProjects, GetJsonSerializerOptions());
            await File.WriteAllTextAsync(_recentProjectsPath, json);
        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine($"Error updating recent projects: {ex.Message}");
        }
    }

    private static JsonSerializerOptions GetJsonSerializerOptions()
    {
        return new JsonSerializerOptions
        {
            WriteIndented = true,
            PropertyNameCaseInsensitive = true,
            DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull
        };
    }
}
