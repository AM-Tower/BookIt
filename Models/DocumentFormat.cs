namespace BookIt.Models;

/// <summary>
/// Enumeration of supported document formats.
/// </summary>
/// <remarks>
/// Defines all file formats that BookIt can read, write, and export.
/// Used for format detection, parsing, and export operations.
/// </remarks>
public enum DocumentFormat
{
    /// <summary>Rich Text Format with formatting preservation.</summary>
    RTF,

    /// <summary>Markdown format for structured text with minimal formatting.</summary>
    Markdown,

    /// <summary>Plain text format without any formatting.</summary>
    PlainText,

    /// <summary>Source code format with syntax highlighting support.</summary>
    Code,

    /// <summary>HyperText Markup Language for web content.</summary>
    HTML
}
