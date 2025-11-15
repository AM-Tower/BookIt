namespace BookIt.Formats;

using System.Text.RegularExpressions;
using BookIt.Models;

/// <summary>
/// HTML format handler.
/// </summary>
/// <remarks>
/// Handles HTML (.html) files with support for common HTML tags and structure.
/// </remarks>
public class HTMLFormat : IDocumentFormat
{
    /// <inheritdoc />
    public DocumentFormat Format => DocumentFormat.HTML;

    /// <inheritdoc />
    public Task<object> ParseAsync(string rawContent)
    {
        var doc = new HTMLDocument
        {
            RawContent = rawContent,
            PlainText = ExtractPlainText(rawContent),
            Headings = ExtractHeadings(rawContent),
            HasStylesheet = rawContent.Contains("<style") || rawContent.Contains("href=\""),
            HasScripts = rawContent.Contains("<script")
        };
        return Task.FromResult((object)doc);
    }

    /// <inheritdoc />
    public Task<string> SerializeAsync(object parsedContent)
    {
        if (parsedContent is HTMLDocument doc)
            return Task.FromResult(doc.RawContent);
        return Task.FromResult(parsedContent as string ?? string.Empty);
    }

    /// <inheritdoc />
    public Task<bool> ValidateAsync(string rawContent)
    {
        // HTML should contain basic HTML structure
        return Task.FromResult(rawContent.Contains("<") && rawContent.Contains(">"));
    }

    /// <inheritdoc />
    public Task<string> ConvertFromAsync(DocumentFormat sourceFormat, string sourceContent)
    {
        if (sourceFormat == DocumentFormat.PlainText)
        {
            // Wrap plain text in HTML
            var escaped = System.Net.WebUtility.HtmlEncode(sourceContent);
            return Task.FromResult($@"<!DOCTYPE html>
<html>
<head>
    <meta charset=""UTF-8"">
    <title>Document</title>
</head>
<body>
    <p>{escaped}</p>
</body>
</html>");
        }

        if (sourceFormat == DocumentFormat.Markdown)
        {
            // Convert markdown to HTML (basic)
            var html = sourceContent;
            html = Regex.Replace(html, @"^# (.+)$", "<h1>$1</h1>", RegexOptions.Multiline);
            html = Regex.Replace(html, @"^## (.+)$", "<h2>$1</h2>", RegexOptions.Multiline);
            html = Regex.Replace(html, @"^### (.+)$", "<h3>$1</h3>", RegexOptions.Multiline);
            html = Regex.Replace(html, @"\*\*(.+?)\*\*", "<strong>$1</strong>");
            html = Regex.Replace(html, @"_(.+?)_", "<em>$1</em>");

            return Task.FromResult($@"<!DOCTYPE html>
<html>
<head>
    <meta charset=""UTF-8"">
    <title>Document</title>
</head>
<body>
    {html}
</body>
</html>");
        }

        return Task.FromResult(sourceContent);
    }

    /// <inheritdoc />
    public string GetFileExtension() => ".html";

    /// <inheritdoc />
    public string GetMimeType() => "text/html";

    /// <summary>
    /// Extracts plain text from HTML content.
    /// </summary>
    private string ExtractPlainText(string html)
    {
        // Remove script and style tags
        var text = Regex.Replace(html, @"<script[^>]*>.*?</script>", "", RegexOptions.IgnoreCase | RegexOptions.Singleline);
        text = Regex.Replace(text, @"<style[^>]*>.*?</style>", "", RegexOptions.IgnoreCase | RegexOptions.Singleline);

        // Decode HTML entities
        text = System.Net.WebUtility.HtmlDecode(text);

        // Remove HTML tags
        text = Regex.Replace(text, @"<[^>]+>", "");

        // Clean up whitespace
        text = Regex.Replace(text, @"\s+", " ").Trim();

        return text;
    }

    /// <summary>
    /// Extracts headings from HTML content.
    /// </summary>
    private List<HTMLHeading> ExtractHeadings(string html)
    {
        var headings = new List<HTMLHeading>();
        var headingPattern = @"<h([1-6])>(.+?)</h\1>";
        var matches = Regex.Matches(html, headingPattern, RegexOptions.IgnoreCase | RegexOptions.Singleline);

        foreach (Match match in matches)
        {
            headings.Add(new HTMLHeading
            {
                Level = int.Parse(match.Groups[1].Value),
                Title = Regex.Replace(match.Groups[2].Value, @"<[^>]+>", "")
            });
        }

        return headings;
    }
}

/// <summary>
/// Represents a parsed HTML document.
/// </summary>
public class HTMLDocument
{
    public string RawContent { get; set; } = string.Empty;
    public string PlainText { get; set; } = string.Empty;
    public List<HTMLHeading> Headings { get; set; } = new();
    public bool HasStylesheet { get; set; }
    public bool HasScripts { get; set; }
}

/// <summary>
/// Represents a heading in an HTML document.
/// </summary>
public class HTMLHeading
{
    public int Level { get; set; }
    public string Title { get; set; } = string.Empty;
}
