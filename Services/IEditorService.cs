namespace BookIt.Services;

using BookIt.Models;

/// <summary>
/// Interface for editor-related operations.
/// </summary>
/// <remarks>
/// Provides methods for text formatting, validation, searching, and undo/redo operations.
/// Implemented by EditorService.
/// </remarks>
public interface IEditorService
{
    /// <summary>
    /// Formats text according to the specified document format.
    /// </summary>
    /// <param name="content">The content to format.</param>
    /// <param name="format">The target format.</param>
    /// <returns>Formatted text suitable for storage in the specified format.</returns>
    Task<string> FormatTextAsync(string content, DocumentFormat format);

    /// <summary>
    /// Validates text for the specified format.
    /// </summary>
    /// <param name="content">The content to validate.</param>
    /// <param name="format">The format to validate against.</param>
    /// <returns>Validation result with any errors or warnings.</returns>
    Task<ValidationResult> ValidateAsync(string content, DocumentFormat format);

    /// <summary>
    /// Searches for text across documents.
    /// </summary>
    /// <param name="query">The search query.</param>
    /// <param name="document">The document to search in.</param>
    /// <returns>List of search results.</returns>
    Task<List<SearchResult>> SearchAsync(string query, Document document);

    /// <summary>
    /// Applies a text style to a specific range.
    /// </summary>
    /// <param name="content">The original content.</param>
    /// <param name="startIndex">Start position in content.</param>
    /// <param name="length">Length of text to style.</param>
    /// <param name="styleName">Name of the style to apply (e.g., "bold", "italic").</param>
    /// <returns>Content with the style applied.</returns>
    Task<string> ApplyStyleAsync(string content, int startIndex, int length, string styleName);
}

/// <summary>
/// Represents validation results for document content.
/// </summary>
public class ValidationResult
{
    /// <summary>
    /// Gets or sets whether the content is valid.
    /// </summary>
    public bool IsValid { get; set; } = true;

    /// <summary>
    /// Gets or sets any validation error messages.
    /// </summary>
    public List<string> Errors { get; set; } = new();

    /// <summary>
    /// Gets or sets any validation warning messages.
    /// </summary>
    public List<string> Warnings { get; set; } = new();
}
