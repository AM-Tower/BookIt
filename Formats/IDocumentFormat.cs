namespace BookIt.Formats;

using BookIt.Models;

/// <summary>
/// Interface for document format handlers.
/// </summary>
/// <remarks>
/// Each document format (RTF, Markdown, Code, etc.) implements this interface
/// to provide parsing, validation, and serialization capabilities.
/// </remarks>
public interface IDocumentFormat
{
    /// <summary>
    /// Gets the format this handler supports.
    /// </summary>
    DocumentFormat Format { get; }

    /// <summary>
    /// Parses raw content into structured data.
    /// </summary>
    /// <param name="rawContent">The raw file content as a string.</param>
    /// <returns>Parsed content object (format-specific).</returns>
    Task<object> ParseAsync(string rawContent);

    /// <summary>
    /// Serializes structured data back to raw format.
    /// </summary>
    /// <param name="parsedContent">The parsed content object.</param>
    /// <returns>Raw content string suitable for file storage.</returns>
    Task<string> SerializeAsync(object parsedContent);

    /// <summary>
    /// Validates the raw content for format correctness.
    /// </summary>
    /// <param name="rawContent">The raw content to validate.</param>
    /// <returns>True if valid; otherwise false.</returns>
    Task<bool> ValidateAsync(string rawContent);

    /// <summary>
    /// Converts content from another format to this format.
    /// </summary>
    /// <param name="sourceFormat">The source format.</param>
    /// <param name="sourceContent">The source content.</param>
    /// <returns>Content converted to this format.</returns>
    Task<string> ConvertFromAsync(DocumentFormat sourceFormat, string sourceContent);

    /// <summary>
    /// Gets the file extension for this format (e.g., ".md", ".rtf").
    /// </summary>
    string GetFileExtension();

    /// <summary>
    /// Gets the MIME type for this format.
    /// </summary>
    string GetMimeType();
}
