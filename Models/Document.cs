namespace BookIt.Models;

/// <summary>
/// Represents a single document with format, content, and metadata.
/// </summary>
/// <remarks>
/// The Document class encapsulates all information about a document including its
/// content, format, editing mode, and metadata. It tracks modification state and provides
/// properties for persistence and display purposes.
/// 
/// Thread Safety: Not thread-safe. Should be accessed from a single thread or with synchronization.
/// </remarks>
public class Document
{
    /// <summary>
    /// Gets or sets the unique identifier for this document.
    /// </summary>
    /// <value>A GUID string identifying this document uniquely within a project.</value>
    public string Id { get; set; } = Guid.NewGuid().ToString();

    /// <summary>
    /// Gets or sets the document title or filename.
    /// </summary>
    /// <value>The name displayed in the editor tab and project explorer.</value>
    public string Title { get; set; } = "Untitled";

    /// <summary>
    /// Gets or sets the document format.
    /// </summary>
    /// <value>One of the DocumentFormat enumeration values.</value>
    public DocumentFormat Format { get; set; } = DocumentFormat.PlainText;

    /// <summary>
    /// Gets or sets the raw document content.
    /// </summary>
    /// <value>The entire document content as a string, including all formatting metadata.</value>
    public string Content { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the current editing mode.
    /// </summary>
    /// <value>Determines the UI presentation and available editing features.</value>
    public EditorMode Mode { get; set; } = EditorMode.WordProcessor;

    /// <summary>
    /// Gets or sets the programming language for code documents.
    /// </summary>
    /// <value>Language identifier such as "cpp", "python", "javascript", etc. Null for non-code documents.</value>
    public string? Language { get; set; }

    /// <summary>
    /// Gets or sets the file path where this document is persisted.
    /// </summary>
    /// <value>Full file path on disk. Null if document has not been saved.</value>
    public string? FilePath { get; set; }

    /// <summary>
    /// Gets or sets the creation timestamp.
    /// </summary>
    /// <value>UTC DateTime when the document was created.</value>
    public DateTime CreatedAt { get; set; } = DateTime.UtcNow;

    /// <summary>
    /// Gets or sets the last modification timestamp.
    /// </summary>
    /// <value>UTC DateTime of the last change to the document.</value>
    public DateTime ModifiedAt { get; set; } = DateTime.UtcNow;

    /// <summary>
    /// Gets or sets a value indicating whether the document has unsaved changes.
    /// </summary>
    /// <value>True if the document has been modified since last save; otherwise false.</value>
    public bool IsDirty { get; set; }

    /// <summary>
    /// Gets or sets custom metadata associated with this document.
    /// </summary>
    /// <value>A dictionary of key-value pairs for extensible metadata storage.</value>
    public Dictionary<string, object> Metadata { get; set; } = new();

    /// <summary>
    /// Gets the line count of the document content.
    /// </summary>
    /// <returns>Number of lines in the document (at least 1 for empty document).</returns>
    public int GetLineCount()
    {
        if (string.IsNullOrEmpty(Content))
            return 1;
        return Content.Split('\n').Length;
    }

    /// <summary>
    /// Gets the character count of the document content.
    /// </summary>
    /// <returns>Total number of characters in the document.</returns>
    public int GetCharacterCount()
    {
        return Content?.Length ?? 0;
    }

    /// <summary>
    /// Gets the word count of the document content.
    /// </summary>
    /// <returns>Approximate number of words (splits on whitespace).</returns>
    public int GetWordCount()
    {
        if (string.IsNullOrEmpty(Content))
            return 0;
        return Content.Split(new[] { ' ', '\n', '\r', '\t' }, StringSplitOptions.RemoveEmptyEntries).Length;
    }

    /// <summary>
    /// Marks the document as saved (IsDirty = false).
    /// </summary>
    public void MarkAsSaved()
    {
        IsDirty = false;
        ModifiedAt = DateTime.UtcNow;
    }

    /// <summary>
    /// Marks the document as modified (IsDirty = true).
    /// </summary>
    public void MarkAsDirty()
    {
        IsDirty = true;
        ModifiedAt = DateTime.UtcNow;
    }

    /// <summary>
    /// Creates a deep copy of this document.
    /// </summary>
    /// <returns>A new Document instance with the same properties.</returns>
    public Document Clone()
    {
        return new Document
        {
            Id = this.Id,
            Title = this.Title,
            Format = this.Format,
            Content = this.Content,
            Mode = this.Mode,
            Language = this.Language,
            FilePath = this.FilePath,
            CreatedAt = this.CreatedAt,
            ModifiedAt = this.ModifiedAt,
            IsDirty = this.IsDirty,
            Metadata = new Dictionary<string, object>(this.Metadata)
        };
    }
}
