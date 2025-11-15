namespace BookIt.Models;

/// <summary>
/// Represents a single search result within a document.
/// </summary>
/// <remarks>
/// Contains information about a match location and surrounding context
/// for display in the search results panel.
/// </remarks>
public class SearchResult
{
    /// <summary>
    /// Gets or sets the document ID containing this result.
    /// </summary>
    /// <value>Document identifier.</value>
    public string DocumentId { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the document title for display.
    /// </summary>
    /// <value>Human-readable document name.</value>
    public string DocumentTitle { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the line number of the match (1-indexed).
    /// </summary>
    /// <value>Line number in the document where the match is found.</value>
    public int LineNumber { get; set; }

    /// <summary>
    /// Gets or sets the column number of the match start (1-indexed).
    /// </summary>
    /// <value>Column position where the match begins on the line.</value>
    public int ColumnNumber { get; set; }

    /// <summary>
    /// Gets or sets the matched text.
    /// </summary>
    /// <value>The exact text that matched the search query.</value>
    public string MatchedText { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the line content containing the match.
    /// </summary>
    /// <value>Full text of the line for context display.</value>
    public string LineContent { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the type of search match.
    /// </summary>
    /// <value>Can be "Text", "Tag", "Comment", "Date", etc.</value>
    public string MatchType { get; set; } = "Text";

    /// <summary>
    /// Gets the match context (text before and after the match).
    /// </summary>
    /// <returns>String showing match with surrounding context.</returns>
    public string GetContextPreview(int contextLength = 20)
    {
        int startCol = Math.Max(0, ColumnNumber - contextLength);
        int endCol = Math.Min(LineContent.Length, ColumnNumber + MatchedText.Length + contextLength);

        string before = startCol > 0 ? "..." : "";
        string after = endCol < LineContent.Length ? "..." : "";

        return before + LineContent[startCol..endCol] + after;
    }
}
