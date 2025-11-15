namespace BookIt.Models;

/// <summary>
/// Represents a project containing multiple documents and configuration.
/// </summary>
/// <remarks>
/// A project is a container for related documents (chapters, sections, code files)
/// with shared settings, resources, and metadata. Projects are persisted as a
/// directory structure with a project.json file.
/// </remarks>
public class Project
{
    /// <summary>
    /// Gets or sets the unique project identifier.
    /// </summary>
    /// <value>A GUID string identifying this project uniquely.</value>
    public string Id { get; set; } = Guid.NewGuid().ToString();

    /// <summary>
    /// Gets or sets the project name.
    /// </summary>
    /// <value>Human-readable name displayed in the project tree.</value>
    public string Name { get; set; } = "Untitled Project";

    /// <summary>
    /// Gets or sets the project description.
    /// </summary>
    /// <value>Optional description for the project.</value>
    public string Description { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the root folder path for this project.
    /// </summary>
    /// <value>Absolute path to the project's root directory on disk.</value>
    public string RootPath { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the resources folder path relative to RootPath.
    /// </summary>
    /// <value>Relative path such as "Resources" or "Assets".</value>
    public string ResourcePath { get; set; } = "Resources";

    /// <summary>
    /// Gets or sets the list of all documents in this project.
    /// </summary>
    /// <value>Collection of Document objects organized by creation order.</value>
    public List<Document> Documents { get; set; } = new();

    /// <summary>
    /// Gets or sets the project-specific settings.
    /// </summary>
    /// <value>ProjectSettings instance for this project.</value>
    public ProjectSettings Settings { get; set; } = new();

    /// <summary>
    /// Gets or sets the creation timestamp.
    /// </summary>
    /// <value>UTC DateTime when the project was created.</value>
    public DateTime CreatedAt { get; set; } = DateTime.UtcNow;

    /// <summary>
    /// Gets or sets the last modification timestamp.
    /// </summary>
    /// <value>UTC DateTime of the last change to the project.</value>
    public DateTime ModifiedAt { get; set; } = DateTime.UtcNow;

    /// <summary>
    /// Gets or sets the version of the project structure for migration purposes.
    /// </summary>
    /// <value>Semantic version string such as "1.0.0".</value>
    public string Version { get; set; } = "1.0.0";

    /// <summary>
    /// Gets the absolute path to the resources folder.
    /// </summary>
    /// <returns>Combined path of RootPath and ResourcePath.</returns>
    public string GetResourceFullPath()
    {
        return Path.Combine(RootPath, ResourcePath);
    }

    /// <summary>
    /// Gets a document by its ID.
    /// </summary>
    /// <param name="documentId">The document identifier to search for.</param>
    /// <returns>The Document if found; otherwise null.</returns>
    public Document? GetDocumentById(string documentId)
    {
        return Documents.FirstOrDefault(d => d.Id == documentId);
    }

    /// <summary>
    /// Gets the number of unsaved documents.
    /// </summary>
    /// <returns>Count of documents with IsDirty = true.</returns>
    public int GetDirtyDocumentCount()
    {
        return Documents.Count(d => d.IsDirty);
    }

    /// <summary>
    /// Gets the total number of lines in all documents.
    /// </summary>
    /// <returns>Sum of line counts from all documents.</returns>
    public int GetTotalLineCount()
    {
        return Documents.Sum(d => d.GetLineCount());
    }

    /// <summary>
    /// Gets the total number of words in all documents.
    /// </summary>
    /// <returns>Sum of word counts from all documents.</returns>
    public int GetTotalWordCount()
    {
        return Documents.Sum(d => d.GetWordCount());
    }

    /// <summary>
    /// Gets the total number of characters in all documents.
    /// </summary>
    /// <returns>Sum of character counts from all documents.</returns>
    public int GetTotalCharacterCount()
    {
        return Documents.Sum(d => d.GetCharacterCount());
    }

    /// <summary>
    /// Adds a document to this project.
    /// </summary>
    /// <param name="document">The document to add.</param>
    /// <remarks>Updates the project's ModifiedAt timestamp.</remarks>
    public void AddDocument(Document document)
    {
        Documents.Add(document);
        ModifiedAt = DateTime.UtcNow;
    }

    /// <summary>
    /// Removes a document from this project.
    /// </summary>
    /// <param name="documentId">The ID of the document to remove.</param>
    /// <returns>True if the document was removed; otherwise false.</returns>
    public bool RemoveDocument(string documentId)
    {
        var doc = GetDocumentById(documentId);
        if (doc != null)
        {
            Documents.Remove(doc);
            ModifiedAt = DateTime.UtcNow;
            return true;
        }
        return false;
    }

    /// <summary>
    /// Saves all documents by clearing their dirty flag.
    /// </summary>
    public void MarkAllAsSaved()
    {
        foreach (var doc in Documents)
        {
            doc.MarkAsSaved();
        }
        ModifiedAt = DateTime.UtcNow;
    }
}
