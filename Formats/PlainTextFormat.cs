namespace BookIt.Formats;

using BookIt.Models;

/// <summary>
/// Plain text format handler (UTF-8, no formatting).
/// </summary>
/// <remarks>
/// Handles plain text files with no formatting information.
/// All content is treated as raw text.
/// </remarks>
public class PlainTextFormat : IDocumentFormat
{
    /// <inheritdoc />
    public DocumentFormat Format => DocumentFormat.PlainText;

    /// <inheritdoc />
    public Task<object> ParseAsync(string rawContent)
    {
        // Plain text requires no parsing - just return content as-is
        return Task.FromResult((object)rawContent);
    }

    /// <inheritdoc />
    public Task<string> SerializeAsync(object parsedContent)
    {
        // Plain text requires no serialization
        return Task.FromResult(parsedContent as string ?? string.Empty);
    }

    /// <inheritdoc />
    public Task<bool> ValidateAsync(string rawContent)
    {
        // Plain text is always valid
        return Task.FromResult(true);
    }

    /// <inheritdoc />
    public Task<string> ConvertFromAsync(DocumentFormat sourceFormat, string sourceContent)
    {
        // All formats convert to plain text by removing formatting
        // For simplicity, just return the content stripped of common formatting markers
        if (sourceFormat == DocumentFormat.Markdown)
        {
            // Remove markdown formatting
            var text = sourceContent;
            text = System.Text.RegularExpressions.Regex.Replace(text, @"[*_`\[\]()#]", "");
            return Task.FromResult(text);
        }

        if (sourceFormat == DocumentFormat.RTF)
        {
            // Remove RTF control words
            var text = System.Text.RegularExpressions.Regex.Replace(sourceContent, @"\\[a-z]+\d*", "");
            return Task.FromResult(text);
        }

        // For other formats, return as-is
        return Task.FromResult(sourceContent);
    }

    /// <inheritdoc />
    public string GetFileExtension() => ".txt";

    /// <inheritdoc />
    public string GetMimeType() => "text/plain";
}
