namespace BookIt.Services;

using System.Diagnostics.CodeAnalysis;
using System.Text.Json;
using System.Text.Json.Serialization;
using BookIt.Formats;
using BookIt.Models;

<<<<<<< TODO: Unmerged change from project 'BookIt(net10.0-ios)', Before:
=======
using System.Diagnostics.CodeAnalysis;
>>>>>>> After

/// <summary>
/// Implementation of IFileSystemService for file I/O operations.
/// </summary>
public class FileSystemService : IFileSystemService
{
    private readonly Dictionary<DocumentFormat, IDocumentFormat> _formatHandlers;

    public FileSystemService()
    {
        // Initialize format handlers
        _formatHandlers = new Dictionary<DocumentFormat, IDocumentFormat>
        {
            { DocumentFormat.PlainText, new PlainTextFormat() },
            { DocumentFormat.Markdown, new MarkdownFormat() },
            { DocumentFormat.RTF, new RTFFormat() },
            { DocumentFormat.Code, new CodeFormat() },
            { DocumentFormat.HTML, new HTMLFormat() }
        };
    }

    /// <inheritdoc />
    public async Task<Document> LoadDocumentAsync(string filePath)
    {
        if (!File.Exists(filePath))
            throw new FileNotFoundException($"File not found: {filePath}");

        try
        {
            var content = await File.ReadAllTextAsync(filePath);
            var document = new Document
            {
                Title = Path.GetFileNameWithoutExtension(filePath),
                FilePath = filePath,
                Content = content,
                IsDirty = false
            };

            // Detect format and language
            var docService = new DocumentService();
            document.Format = await docService.DetectFormatAsync(filePath);
            document.Language = await docService.DetectLanguageAsync(filePath);
            document.Mode = GetEditorModeForFormat(document.Format);

            return document;
        }
        catch (Exception ex)
        {
            throw new InvalidOperationException($"Failed to load document from {filePath}", ex);
        }
    }

    /// <inheritdoc />
    public async Task<bool> SaveDocumentAsync(Document document, string filePath)
    {
        try
        {
            var directory = Path.GetDirectoryName(filePath);
            if (!string.IsNullOrEmpty(directory) && !Directory.Exists(directory))
                Directory.CreateDirectory(directory);

            await File.WriteAllTextAsync(filePath, document.Content);
            document.FilePath = filePath;
            document.MarkAsSaved();
            return true;
        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine($"Failed to save document: {ex.Message}");
            return false;
        }
    }

    /// <inheritdoc />
    public async Task<bool> ExportToPdfAsync(Document document, string outputPath)
    {
        // PDF export requires a third-party library (iTextSharp, PdfSharp, etc.)
        // For now, create a placeholder
        try
        {
            await File.WriteAllTextAsync(outputPath,
                $"PDF Export Placeholder\nDocument: {document.Title}\nFormat: {document.Format}\nContent: {document.Content}");
            return true;
        }
        catch
        {
            return false;
        }
    }

    /// <inheritdoc />
    public async Task<bool> ExportToMarkdownAsync(Document document, string outputPath)
    {
        try
        {
            if (_formatHandlers.TryGetValue(DocumentFormat.Markdown, out var handler))
            {
                var content = await handler.ConvertFromAsync(document.Format, document.Content);
                await File.WriteAllTextAsync(outputPath, content);
                return true;
            }
            return false;
        }
        catch
        {
            return false;
        }
    }

    /// <inheritdoc />
    public async Task<bool> ExportToHtmlAsync(Document document, string outputPath)
    {
        try
        {
            if (_formatHandlers.TryGetValue(DocumentFormat.HTML, out var handler))
            {
                var content = await handler.ConvertFromAsync(document.Format, document.Content);
                await File.WriteAllTextAsync(outputPath, content);
                return true;
            }
            return false;
        }
        catch
        {
            return false;
        }
    }

    /// <inheritdoc />
    [RequiresUnreferencedCode()]
    [RequiresUnreferencedCode()]
    public async Task<string> BackupProjectAsync(Project project)
    {
        try
        {
            var backupPath = Path.Combine(
                project.RootPath,
                ".backups",
                $"backup_{DateTime.UtcNow:yyyyMMdd_HHmmss}.json");

            var directory = Path.GetDirectoryName(backupPath);
            if (!string.IsNullOrEmpty(directory) && !Directory.Exists(directory))
                Directory.CreateDirectory(directory);

            var json = JsonSerializer.Serialize(project, new JsonSerializerOptions { WriteIndented = true });
            await File.WriteAllTextAsync(backupPath, json);

            return backupPath;
        }
        catch (Exception ex)
        {
            System.Diagnostics.Debug.WriteLine($"Backup failed: {ex.Message}");
            throw;
        }
    }

    /// <inheritdoc />
    [RequiresUnreferencedCode()]
    [RequiresUnreferencedCode()]
    public async Task<bool> RestoreFromBackupAsync(string backupPath, string targetPath)
    {
        try
        {
            if (!File.Exists(backupPath))
                return false;

            var json = await File.ReadAllTextAsync(backupPath);
            var project = JsonSerializer.Deserialize<Project>(json);

            if (project == null)
                return false;

            var targetDirectory = Path.GetDirectoryName(targetPath);
            if (!string.IsNullOrEmpty(targetDirectory) && !Directory.Exists(targetDirectory))
                Directory.CreateDirectory(targetDirectory);

            // Save restored project
            var restoredJson = JsonSerializer.Serialize(project, new JsonSerializerOptions { WriteIndented = true });
            await File.WriteAllTextAsync(targetPath, restoredJson);

            return true;
        }
        catch
        {
            return false;
        }
    }

    /// <inheritdoc />
    public Task<bool> FileExistsAsync(string filePath)
    {
        return Task.FromResult(File.Exists(filePath));
    }

    /// <inheritdoc />
    public Task<bool> DeleteFileAsync(string filePath)
    {
        try
        {
            if (File.Exists(filePath))
            {
                File.Delete(filePath);
                return Task.FromResult(true);
            }
            return Task.FromResult(false);
        }
        catch
        {
            return Task.FromResult(false);
        }
    }

    /// <summary>
    /// Gets the editor mode for a document format.
    /// </summary>
    private EditorMode GetEditorModeForFormat(DocumentFormat format)
    {
        return format switch
        {
            DocumentFormat.RTF => EditorMode.WordProcessor,
            DocumentFormat.Markdown => EditorMode.MarkdownEditor,
            DocumentFormat.Code => EditorMode.CodeEditor,
            DocumentFormat.HTML => EditorMode.HTMLEditor,
            _ => EditorMode.WordProcessor
        };
    }
}
