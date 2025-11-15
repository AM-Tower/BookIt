namespace BookIt.Formats;

using System.Text.RegularExpressions;
using BookIt.Models;

/// <summary>
/// Source code format handler.
/// </summary>
/// <remarks>
/// Handles source code files in various languages (C++, Python, JavaScript, etc.)
/// with support for syntax preservation and line endings.
/// </remarks>
public class CodeFormat : IDocumentFormat
{
    /// <inheritdoc />
    public DocumentFormat Format => DocumentFormat.Code;

    /// <inheritdoc />
    public Task<object> ParseAsync(string rawContent)
    {
        var doc = new CodeDocument
        {
            RawContent = rawContent,
            Lines = rawContent.Split(new[] { "\r\n", "\r", "\n" }, StringSplitOptions.None),
            Metadata = ExtractMetadata(rawContent)
        };
        return Task.FromResult((object)doc);
    }

    /// <inheritdoc />
    public Task<string> SerializeAsync(object parsedContent)
    {
        if (parsedContent is CodeDocument doc)
            return Task.FromResult(doc.RawContent);
        return Task.FromResult(parsedContent as string ?? string.Empty);
    }

    /// <inheritdoc />
    public Task<bool> ValidateAsync(string rawContent)
    {
        // Code is valid if not empty
        return Task.FromResult(!string.IsNullOrEmpty(rawContent));
    }

    /// <inheritdoc />
    public Task<string> ConvertFromAsync(DocumentFormat sourceFormat, string sourceContent)
    {
        // Code format preserves content as-is (no conversion)
        return Task.FromResult(sourceContent);
    }

    /// <inheritdoc />
    public string GetFileExtension() => ".code";

    /// <inheritdoc />
    public string GetMimeType() => "text/plain";

    /// <summary>
    /// Extracts metadata from code content (function/class definitions).
    /// </summary>
    private CodeMetadata ExtractMetadata(string content)
    {
        var metadata = new CodeMetadata();
        var lines = content.Split(new[] { "\r\n", "\r", "\n" }, StringSplitOptions.None);

        // Count comments
        foreach (var line in lines)
        {
            if (line.TrimStart().StartsWith("//") || line.TrimStart().StartsWith("#") ||
                line.TrimStart().StartsWith("--") || line.TrimStart().StartsWith("/*"))
            {
                metadata.CommentLineCount++;
            }
        }

        // Count functions/methods (basic pattern)
        var functionPattern = @"(def|function|void|int|bool|string|class|interface|struct)\s+(\w+)\s*\(";
        metadata.FunctionCount = Regex.Matches(content, functionPattern).Count;

        metadata.LineCount = lines.Length;
        metadata.CharacterCount = content.Length;

        return metadata;
    }
}

/// <summary>
/// Represents a parsed code document.
/// </summary>
public class CodeDocument
{
    public string RawContent { get; set; } = string.Empty;
    public string[] Lines { get; set; } = Array.Empty<string>();
    public CodeMetadata Metadata { get; set; } = new();
}

/// <summary>
/// Metadata extracted from code files.
/// </summary>
public class CodeMetadata
{
    public int LineCount { get; set; }
    public int CharacterCount { get; set; }
    public int CommentLineCount { get; set; }
    public int FunctionCount { get; set; }
}
