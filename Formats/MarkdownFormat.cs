namespace BookIt.Formats;

using System.Text.RegularExpressions;
using BookIt.Models;

/// <summary>
/// Markdown format handler.
/// </summary>
/// <remarks>
/// Handles Markdown (.md) files with support for common Markdown syntax.
/// </remarks>
public class MarkdownFormat : IDocumentFormat
{
    /// <inheritdoc />
    public DocumentFormat Format => DocumentFormat.Markdown;

    /// <inheritdoc />
    public Task<object> ParseAsync(string rawContent)
    {
        // Parse markdown into a structured representation
        var lines = rawContent.Split(new[] { "\r\n", "\r", "\n" }, StringSplitOptions.None);
        var parsed = new MarkdownDocument { RawContent = rawContent, Lines = lines };
        return Task.FromResult((object)parsed);
    }

    /// <inheritdoc />
    public Task<string> SerializeAsync(object parsedContent)
    {
        if (parsedContent is MarkdownDocument doc)
            return Task.FromResult(doc.RawContent);
        return Task.FromResult(parsedContent as string ?? string.Empty);
    }

    /// <inheritdoc />
    public Task<bool> ValidateAsync(string rawContent)
    {
        // Markdown is quite flexible - just check it's not empty
        return Task.FromResult(!string.IsNullOrEmpty(rawContent));
    }

    /// <inheritdoc />
    public Task<string> ConvertFromAsync(DocumentFormat sourceFormat, string sourceContent)
    {
        if (sourceFormat == DocumentFormat.PlainText)
        {
            // Convert plain text to markdown (no formatting, just paragraphs)
            return Task.FromResult(sourceContent);
        }

        if (sourceFormat == DocumentFormat.RTF)
        {
            // Convert RTF to Markdown
            var text = sourceContent;
            // Remove RTF control sequences
            text = Regex.Replace(text, @"\\[a-z]+\d*\s*", "");
            text = Regex.Replace(text, @"[{}]", "");
            return Task.FromResult(text);
        }

        return Task.FromResult(sourceContent);
    }

    /// <inheritdoc />
    public string GetFileExtension() => ".md";

    /// <inheritdoc />
    public string GetMimeType() => "text/markdown";
}

/// <summary>
/// Represents a parsed Markdown document.
/// </summary>
public class MarkdownDocument
{
    public string RawContent { get; set; } = string.Empty;
    public string[] Lines { get; set; } = Array.Empty<string>();

    public List<MarkdownHeading> GetHeadings()
    {
        var headings = new List<MarkdownHeading>();
        for (int i = 0; i < Lines.Length; i++)
        {
            var line = Lines[i];
            var match = Regex.Match(line, @"^(#+)\s+(.+)$");
            if (match.Success)
            {
                headings.Add(new MarkdownHeading
                {
                    Level = match.Groups[1].Value.Length,
                    Title = match.Groups[2].Value,
                    LineNumber = i + 1
                });
            }
        }
        return headings;
    }
}

/// <summary>
/// Represents a heading in a Markdown document.
/// </summary>
public class MarkdownHeading
{
    public int Level { get; set; }
    public string Title { get; set; } = string.Empty;
    public int LineNumber { get; set; }
}
