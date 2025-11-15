namespace BookIt.ViewModels;

using System.Collections.ObjectModel;
using BookIt.Models;

/// <summary>
/// ViewModel for the right panel (table of contents, resources).
/// </summary>
/// <remarks>
/// Manages the table of contents view and project resource display.
/// </remarks>
public class RightPanelViewModel
{
    private string _activePanel = "TableOfContents";

    /// <summary>
    /// Gets or sets the name of the currently active panel.
    /// </summary>
    /// <remarks>
    /// Valid values: "TableOfContents", "Resources".
    /// </remarks>
    public string ActivePanel
    {
        get => _activePanel;
        set
        {
            _activePanel = value;
            OnPropertyChanged(nameof(ActivePanel));
        }
    }

    /// <summary>
    /// Gets the table of contents entries (headings hierarchy).
    /// </summary>
    public ObservableCollection<TOCEntry> TableOfContents { get; } = new();

    /// <summary>
    /// Gets the project resources (images, files, etc.).
    /// </summary>
    public ObservableCollection<string> Resources { get; } = new();

    /// <summary>
    /// Gets or sets whether the right panel is visible.
    /// </summary>
    public bool IsVisible { get; set; } = true;

    /// <summary>
    /// Gets or sets the width of the right panel.
    /// </summary>
    public double PanelWidth { get; set; } = 300;

    /// <summary>
    /// Switches to the table of contents panel.
    /// </summary>
    public void ShowTableOfContents()
    {
        ActivePanel = "TableOfContents";
    }

    /// <summary>
    /// Switches to the resources panel.
    /// </summary>
    public void ShowResources()
    {
        ActivePanel = "Resources";
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
/// Represents a table of contents entry (heading).
/// </summary>
public class TOCEntry
{
    /// <summary>
    /// Gets or sets the heading text.
    /// </summary>
    public string Title { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the heading level (1-6).
    /// </summary>
    public int Level { get; set; } = 1;

    /// <summary>
    /// Gets or sets the page number where this heading appears.
    /// </summary>
    public int PageNumber { get; set; }

    /// <summary>
    /// Gets or sets nested sub-entries.
    /// </summary>
    public ObservableCollection<TOCEntry> Children { get; set; } = new();
}
