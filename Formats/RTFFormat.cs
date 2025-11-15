namespace BookIt.Formats;

using System.Text.RegularExpressions;
using BookIt.Models;

/// <summary>
/// Rich Text Format (RTF) handler.
/// </summary>
/// <remarks>
/// Handles RTF (.rtf) files with support for common RTF formatting.
/// </remarks>
public class RTFFormat : IDocumentFormat
{
    /// <inheritdoc />
    public DocumentFormat Format => DocumentFormat.RTF;

    /// <inheritdoc />
    public Task<object> ParseAsync(string rawContent)
    {
        var doc = new RTFDocument
        {
            RawContent = rawContent,
            PlainText = ExtractPlainText(rawContent),
            Formatting = ExtractFormatting(rawContent)
        };
        return Task.FromResult((object)doc);
    }

    /// <inheritdoc />
    public Task<string> SerializeAsync(object parsedContent)
    {
        if (parsedContent is RTFDocument doc)
            return Task.FromResult(doc.RawContent);
        return Task.FromResult(parsedContent as string ?? string.Empty);
    }

    /// <inheritdoc />
    public Task<bool> ValidateAsync(string rawContent)
    {
        // RTF files should start with {\rtf
        return Task.FromResult(rawContent.TrimStart().StartsWith("{\\rtf"));
    }

    /// <inheritdoc />
    public Task<string> ConvertFromAsync(DocumentFormat sourceFormat, string sourceContent)
    {
        if (sourceFormat == DocumentFormat.PlainText)
        {
            // Convert plain text to minimal RTF
            var escaped = sourceContent.Replace("\\", "\\\\").Replace("{", "\\{").Replace("}", "\\}");
            return Task.FromResult($@"{{\rtf1\ansi\ansicpg1252\deff0
{{\fonttbl{{\f0 Times New Roman;}}}}
{{\colortbl;\red0\green0\blue0;}}
\uc1\pard\plain\deftab720\f0\fs24\cf0 {escaped}}}");
        }

        if (sourceFormat == DocumentFormat.Markdown)
        {
            // Convert markdown to RTF
            var text = sourceContent;
            // Simple conversion: remove markdown syntax
            text = Regex.Replace(text, @"^#+\s+", "", RegexOptions.Multiline);
            var escaped = text.Replace("\\", "\\\\").Replace("{", "\\{").Replace("}", "\\}");
            return Task.FromResult($@"{{\rtf1\ansi\ansicpg1252\deff0
{{\fonttbl{{\f0 Times New Roman;}}}}
{{\colortbl;\red0\green0\blue0;}}
\uc1\pard\plain\deftab720\f0\fs24\cf0 {escaped}}}");
        }

        return Task.FromResult(sourceContent);
    }

    /// <inheritdoc />
    public string GetFileExtension() => ".rtf";

    /// <inheritdoc />
    public string GetMimeType() => "application/rtf";

    /// <summary>
    /// Extracts plain text from RTF content.
    /// </summary>
    private string ExtractPlainText(string rtf)
    {
        var text = rtf;
        // Remove RTF control words and special characters
        text = Regex.Replace(text, @"\\[a-z]+\d*\s*", "");
        text = Regex.Replace(text, @"[{}]", "");
        text = Regex.Replace(text, @"\*\\[a-z]+[?]?\s*", "");
        return text.Trim();
    }

    /// <summary>
    /// Extracts formatting information from RTF.
    /// </summary>
    private RTFFormatting ExtractFormatting(string rtf)
    {
        var formatting = new RTFFormatting();

        // Check for bold
        if (rtf.Contains("\\b"))
            formatting.IsBold = true;

        // Check for italic
        if (rtf.Contains("\\i"))
            formatting.IsItalic = true;

        // Check for underline
        if (rtf.Contains("\\ul"))
            formatting.IsUnderlined = true;

        // Extract font size (default RTF uses half-points)
        var sizeMatch = Regex.Match(rtf, @"\\fs(\d+)");
        if (sizeMatch.Success && int.TryParse(sizeMatch.Groups[1].Value, out var size))
            formatting.FontSize = size / 2; // Convert to points

        return formatting;
    }
}

/// <summary>
/// Represents a parsed RTF document.
/// </summary>
public class RTFDocument
{
    public string RawContent { get; set; } = string.Empty;
    public string PlainText { get; set; } = string.Empty;
    public RTFFormatting Formatting { get; set; } = new();
}

/// <summary>
/// Represents RTF formatting attributes.
/// </summary>
public class RTFFormatting
{
    public bool IsBold { get; set; }
    public bool IsItalic { get; set; }
    public bool IsUnderlined { get; set; }
    public int FontSize { get; set; } = 12;
    public string FontFamily { get; set; } = "Times New Roman";
}
