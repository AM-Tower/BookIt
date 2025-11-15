namespace BookIt.ViewModels;

using BookIt.Models;

/// <summary>
/// ViewModel for the status bar (bottom information display).
/// </summary>
/// <remarks>
/// Displays editor state information: line/column, word count, document format, zoom level.
/// </remarks>
public class StatusBarViewModel
{
    private int _currentLine = 1;
    private int _currentColumn = 1;
    private int _wordCount;
    private int _characterCount;
    private string _format = "PlainText";
    private string _encoding = "UTF-8";
    private int _zoomLevel = 100;

    /// <summary>
    /// Gets or sets the current line number.
    /// </summary>
    public int CurrentLine
    {
        get => _currentLine;
        set
        {
            _currentLine = value;
            OnPropertyChanged(nameof(CurrentLine));
        }
    }

    /// <summary>
    /// Gets or sets the current column number.
    /// </summary>
    public int CurrentColumn
    {
        get => _currentColumn;
        set
        {
            _currentColumn = value;
            OnPropertyChanged(nameof(CurrentColumn));
        }
    }

    /// <summary>
    /// Gets or sets the word count of the current document.
    /// </summary>
    public int WordCount
    {
        get => _wordCount;
        set
        {
            _wordCount = value;
            OnPropertyChanged(nameof(WordCount));
        }
    }

    /// <summary>
    /// Gets or sets the character count of the current document.
    /// </summary>
    public int CharacterCount
    {
        get => _characterCount;
        set
        {
            _characterCount = value;
            OnPropertyChanged(nameof(CharacterCount));
        }
    }

    /// <summary>
    /// Gets or sets the current document format.
    /// </summary>
    public string Format
    {
        get => _format;
        set
        {
            _format = value;
            OnPropertyChanged(nameof(Format));
        }
    }

    /// <summary>
    /// Gets or sets the file encoding.
    /// </summary>
    public string Encoding
    {
        get => _encoding;
        set
        {
            _encoding = value;
            OnPropertyChanged(nameof(Encoding));
        }
    }

    /// <summary>
    /// Gets or sets the zoom level percentage.
    /// </summary>
    public int ZoomLevel
    {
        get => _zoomLevel;
        set
        {
            _zoomLevel = value;
            OnPropertyChanged(nameof(ZoomLevel));
        }
    }

    /// <summary>
    /// Gets a formatted string for line:column display.
    /// </summary>
    public string LineColumnDisplay => $"Ln {_currentLine}, Col {_currentColumn}";

    /// <summary>
    /// Gets a formatted string for statistics display.
    /// </summary>
    public string StatisticsDisplay => $"{_wordCount} words • {_characterCount} chars";

    /// <summary>
    /// Updates status based on a document and cursor position.
    /// </summary>
    /// <param name="document">The document to analyze.</param>
    /// <param name="caretPosition">The current cursor position.</param>
    public void UpdateStatus(Document document, int caretPosition)
    {
        WordCount = document.GetWordCount();
        CharacterCount = document.GetCharacterCount();
        Format = document.Format.ToString();

        // Calculate line and column
        if (string.IsNullOrEmpty(document.Content) || caretPosition <= 0)
        {
            CurrentLine = 1;
            CurrentColumn = 1;
        }
        else
        {
            CurrentLine = document.Content[..caretPosition].Split('\n').Length;
            var lastNewline = document.Content[..caretPosition].LastIndexOf('\n');
            CurrentColumn = lastNewline < 0 ? caretPosition + 1 : caretPosition - lastNewline;
        }
    }

    /// <summary>
    /// Increases zoom level by 10%.
    /// </summary>
    public void ZoomIn()
    {
        if (ZoomLevel < 300)
        {
            ZoomLevel += 10;
        }
    }

    /// <summary>
    /// Decreases zoom level by 10%.
    /// </summary>
    public void ZoomOut()
    {
        if (ZoomLevel > 50)
        {
            ZoomLevel -= 10;
        }
    }

    /// <summary>
    /// Resets zoom level to 100%.
    /// </summary>
    public void ResetZoom()
    {
        ZoomLevel = 100;
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
