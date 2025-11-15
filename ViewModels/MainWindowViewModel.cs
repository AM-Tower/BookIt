namespace BookIt.ViewModels;

using System.Collections.ObjectModel;
using BookIt.Models;

/// <summary>
/// Delegate for property changed notifications.
/// </summary>
/// <param name="sender">The object that raised the event.</param>
/// <param name="e">Event arguments containing the property name.</param>
public delegate void PropertyChangedEventHandler(object? sender, PropertyChangedEventArgs e);

/// <summary>
/// ViewModel for the main application window.
/// </summary>
/// <remarks>
/// Coordinates between all UI panels and services. Manages document switching,
/// project state, and application-level commands.
/// </remarks>
public class MainWindowViewModel
{
    private Document? _currentDocument;
    private Project? _currentProject;

    /// <summary>
    /// Gets or sets the currently active project.
    /// </summary>
    public Project? CurrentProject
    {
        get => _currentProject;
        set
        {
            _currentProject = value;
            OnPropertyChanged(nameof(CurrentProject));
        }
    }

    /// <summary>
    /// Gets or sets the currently active document.
    /// </summary>
    public Document? CurrentDocument
    {
        get => _currentDocument;
        set
        {
            _currentDocument = value;
            OnPropertyChanged(nameof(CurrentDocument));
        }
    }

    /// <summary>
    /// Gets the collection of open documents.
    /// </summary>
    public ObservableCollection<Document> OpenDocuments { get; } = new();

    /// <summary>
    /// Gets or sets the application title.
    /// </summary>
    public string ApplicationTitle { get; set; } = "BookIt";

    /// <summary>
    /// Gets or sets whether the application has unsaved changes.
    /// </summary>
    public bool HasUnsavedChanges { get; set; }

    /// <summary>
    /// Adds a document to the open documents collection.
    /// </summary>
    /// <param name="document">The document to add.</param>
    public void AddOpenDocument(Document document)
    {
        if (!OpenDocuments.Any(d => d.Id == document.Id))
        {
            OpenDocuments.Add(document);
        }
    }

    /// <summary>
    /// Removes a document from the open documents collection.
    /// </summary>
    /// <param name="documentId">The ID of the document to remove.</param>
    public void RemoveOpenDocument(string documentId)
    {
        var doc = OpenDocuments.FirstOrDefault(d => d.Id == documentId);
        if (doc != null)
        {
            OpenDocuments.Remove(doc);
        }
    }

    /// <summary>
    /// Occurs when a property changes.
    /// </summary>
    public event PropertyChangedEventHandler? PropertyChanged;

    /// <summary>
    /// Raises PropertyChanged event.
    /// </summary>
    protected void OnPropertyChanged(string propertyName)
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }
}

/// <summary>
/// Event arguments for property change notifications.
/// </summary>
public class PropertyChangedEventArgs : EventArgs
{
    public PropertyChangedEventArgs(string propertyName)
    {
        PropertyName = propertyName;
    }

    public string PropertyName { get; }
}
