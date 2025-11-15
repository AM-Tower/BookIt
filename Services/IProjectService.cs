namespace BookIt.Services;

using BookIt.Models;

/// <summary>
/// Interface for project management operations.
/// </summary>
/// <remarks>
/// Handles creation, loading, saving, and management of projects.
/// Implemented by ProjectService.
/// </remarks>
public interface IProjectService
{
    /// <summary>
    /// Creates a new project.
    /// </summary>
    /// <param name="name">The project name.</param>
    /// <param name="rootPath">The root directory for the project.</param>
    /// <returns>New Project instance.</returns>
    Task<Project> CreateProjectAsync(string name, string rootPath);

    /// <summary>
    /// Loads a project from disk.
    /// </summary>
    /// <param name="projectPath">The project directory path.</param>
    /// <returns>Loaded Project instance.</returns>
    Task<Project> LoadProjectAsync(string projectPath);

    /// <summary>
    /// Saves a project to disk.
    /// </summary>
    /// <param name="project">The project to save.</param>
    /// <returns>Success indication.</returns>
    Task<bool> SaveProjectAsync(Project project);

    /// <summary>
    /// Gets all recently opened projects.
    /// </summary>
    /// <returns>List of project paths ordered by most recent first.</returns>
    Task<List<string>> GetRecentProjectsAsync();

    /// <summary>
    /// Adds a document to a project.
    /// </summary>
    /// <param name="project">The project to add to.</param>
    /// <param name="document">The document to add.</param>
    /// <returns>Success indication.</returns>
    Task<bool> AddDocumentAsync(Project project, Document document);

    /// <summary>
    /// Removes a document from a project.
    /// </summary>
    /// <param name="project">The project containing the document.</param>
    /// <param name="documentId">The ID of the document to remove.</param>
    /// <returns>Success indication.</returns>
    Task<bool> RemoveDocumentAsync(Project project, string documentId);
}
