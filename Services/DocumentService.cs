namespace BookIt.Services;

using System.Text.RegularExpressions;
using BookIt.Models;

/// <summary>
/// Implementation of IDocumentService for document creation and format detection.
/// </summary>
public class DocumentService : IDocumentService
{
    /// <inheritdoc />
    public Task<Document> CreateDocumentAsync(string title, DocumentFormat format)
    {
        var document = new Document
        {
            Title = title,
            Format = format,
            Content = string.Empty,
            Mode = GetEditorModeForFormat(format),
            IsDirty = false
        };

        return Task.FromResult(document);
    }

    /// <inheritdoc />
    public Task<DocumentFormat> DetectFormatAsync(string filePath)
    {
        var extension = Path.GetExtension(filePath).ToLowerInvariant();

        return Task.FromResult(extension switch
        {
            ".rtf" => DocumentFormat.RTF,
            ".md" or ".markdown" => DocumentFormat.Markdown,
            ".txt" => DocumentFormat.PlainText,
            ".html" or ".htm" => DocumentFormat.HTML,
            ".cpp" or ".cc" or ".cxx" or ".c++" or ".h" or ".hpp" => DocumentFormat.Code,
            ".py" or ".pyw" => DocumentFormat.Code,
            ".js" or ".jsx" or ".ts" or ".tsx" => DocumentFormat.Code,
            ".cs" or ".csproj" => DocumentFormat.Code,
            ".java" => DocumentFormat.Code,
            ".go" => DocumentFormat.Code,
            ".rs" => DocumentFormat.Code,
            ".sh" or ".bash" => DocumentFormat.Code,
            ".sql" => DocumentFormat.Code,
            ".css" => DocumentFormat.Code,
            _ => DocumentFormat.PlainText
        });
    }

    /// <inheritdoc />
    public Task<string?> DetectLanguageAsync(string filePath)
    {
        var extension = Path.GetExtension(filePath).ToLowerInvariant();

        var language = extension switch
        {
            ".cpp" or ".cc" or ".cxx" or ".c++" => "cpp",
            ".h" or ".hpp" => "cpp",
            ".py" or ".pyw" => "python",
            ".js" => "javascript",
            ".jsx" => "jsx",
            ".ts" => "typescript",
            ".tsx" => "tsx",
            ".cs" => "csharp",
            ".java" => "java",
            ".go" => "go",
            ".rs" => "rust",
            ".sh" or ".bash" => "bash",
            ".sql" => "sql",
            ".css" => "css",
            ".html" or ".htm" => "html",
            _ => null
        };

        return Task.FromResult(language);
    }

    /// <summary>
    /// Gets the appropriate editor mode for a document format.
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
