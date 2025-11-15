namespace BookIt.Services;

using BookIt.Models;

/// <summary>
/// Interface for file system and I/O operations.
/// </summary>
/// <remarks>
/// Handles loading, saving, exporting, and backup operations for projects and documents.
/// Implemented by FileSystemService.
/// </remarks>
public interface IFileSystemService
{
    /// <summary>
    /// Loads a document from disk.
    /// </summary>
    /// <param name="filePath">The file path to load.</param>
    /// <returns>Loaded document with content populated.</returns>
    Task<Document> LoadDocumentAsync(string filePath);

    /// <summary>
    /// Saves a document to disk.
    /// </summary>
    /// <param name="document">The document to save.</param>
    /// <param name="filePath">The file path to save to.</param>
    /// <returns>Success/failure indication.</returns>
    Task<bool> SaveDocumentAsync(Document document, string filePath);

    /// <summary>
    /// Exports a document to PDF format.
    /// </summary>
    /// <param name="document">The document to export.</param>
    /// <param name="outputPath">The output file path.</param>
    /// <returns>Success indication.</returns>
    Task<bool> ExportToPdfAsync(Document document, string outputPath);

    /// <summary>
    /// Exports a document to Markdown format.
    /// </summary>
    /// <param name="document">The document to export.</param>
    /// <param name="outputPath">The output file path.</param>
    /// <returns>Success indication.</returns>
    Task<bool> ExportToMarkdownAsync(Document document, string outputPath);

    /// <summary>
    /// Exports a document to HTML format.
    /// </summary>
    /// <param name="document">The document to export.</param>
    /// <param name="outputPath">The output file path.</param>
    /// <returns>Success indication.</returns>
    Task<bool> ExportToHtmlAsync(Document document, string outputPath);

    /// <summary>
    /// Creates a backup of a project.
    /// </summary>
    /// <param name="project">The project to backup.</param>
    /// <returns>The backup file path.</returns>
    Task<string> BackupProjectAsync(Project project);

    /// <summary>
    /// Restores a project from a backup.
    /// </summary>
    /// <param name="backupPath">The backup file path.</param>
    /// <param name="targetPath">Where to restore the project.</param>
    /// <returns>Success indication.</returns>
    Task<bool> RestoreFromBackupAsync(string backupPath, string targetPath);

    /// <summary>
    /// Checks if a file exists at the given path.
    /// </summary>
    /// <param name="filePath">The file path to check.</param>
    /// <returns>True if file exists; otherwise false.</returns>
    Task<bool> FileExistsAsync(string filePath);

    /// <summary>
    /// Deletes a file at the given path.
    /// </summary>
    /// <param name="filePath">The file path to delete.</param>
    /// <returns>Success indication.</returns>
    Task<bool> DeleteFileAsync(string filePath);
}
