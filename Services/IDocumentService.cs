namespace BookIt.Services;

using BookIt.Models;

/// <summary>
/// Interface for document operations.
/// </summary>
/// <remarks>
/// Handles document creation, format detection, and parsing.
/// Implemented by DocumentService.
/// </remarks>
public interface IDocumentService
{
    /// <summary>
    /// Creates a new blank document.
    /// </summary>
    /// <param name="title">The document title.</param>
    /// <param name="format">The document format.</param>
    /// <returns>New Document instance.</returns>
    Task<Document> CreateDocumentAsync(string title, DocumentFormat format);

    /// <summary>
    /// Detects the format of a file based on its content and extension.
    /// </summary>
    /// <param name="filePath">The file path to analyze.</param>
    /// <returns>Detected DocumentFormat.</returns>
    Task<DocumentFormat> DetectFormatAsync(string filePath);

    /// <summary>
    /// Detects the programming language for code files.
    /// </summary>
    /// <param name="filePath">The file path to analyze.</param>
    /// <returns>Language identifier (e.g., "cpp", "python").</returns>
    Task<string?> DetectLanguageAsync(string filePath);
}
