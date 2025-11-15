namespace BookIt.ViewModels;

using BookIt.Models;

/// <summary>
/// ViewModel for the main editor panel.
/// </summary>
/// <remarks>
/// Manages the active document, formatting commands, and editor state.
/// </remarks>
public class EditorViewModel
{
    private Document? _document;
    private string _selectedText = string.Empty;
    private int _caretPosition;

    /// <summary>
    /// Gets or sets the document being edited.
    /// </summary>
    public Document? Document
    {
        get => _document;
        set
        {
            _document = value;
            OnPropertyChanged(nameof(Document));
        }
    }

    /// <summary>
    /// Gets or sets the currently selected text.
    /// </summary>
    public string SelectedText
    {
        get => _selectedText;
        set
        {
            _selectedText = value;
            OnPropertyChanged(nameof(SelectedText));
        }
    }

    /// <summary>
    /// Gets or sets the caret (cursor) position in the document.
    /// </summary>
    public int CaretPosition
    {
        get => _caretPosition;
        set
        {
            _caretPosition = value;
            OnPropertyChanged(nameof(CaretPosition));
        }
    }

    /// <summary>
    /// Gets the current line number (1-indexed).
    /// </summary>
    public int CurrentLine
    {
        get
        {
            if (Document?.Content == null || _caretPosition <= 0)
                return 1;

            return Document.Content[.._caretPosition].Split('\n').Length;
        }
    }

    /// <summary>
    /// Gets the current column number (1-indexed).
    /// </summary>
    public int CurrentColumn
    {
        get
        {
            if (Document?.Content == null || _caretPosition <= 0)
                return 1;

            var lastNewline = Document.Content[.._caretPosition].LastIndexOf('\n');
            return _caretPosition - lastNewline;
        }
    }

    /// <summary>
    /// Gets or sets whether the editor can edit (not read-only).
    /// </summary>
    public bool CanEdit { get; set; } = true;

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
