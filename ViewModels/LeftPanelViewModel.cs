namespace BookIt.ViewModels;

/// <summary>
/// ViewModel for the left panel (properties, compare, preview, search, etc.).
/// </summary>
/// <remarks>
/// Manages the active left panel view and communicates with the main editor.
/// </remarks>
public class LeftPanelViewModel
{
    private string _activePanel = "Properties";

    /// <summary>
    /// Gets or sets the name of the currently active panel.
    /// </summary>
    /// <remarks>
    /// Valid values: "Properties", "Preview", "Compare", "Search", "Calculator", "Project", "Settings", "BugTracker".
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
    /// Gets or sets the search query when search panel is active.
    /// </summary>
    public string SearchQuery { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets whether the left panel is visible.
    /// </summary>
    public bool IsVisible { get; set; } = true;

    /// <summary>
    /// Gets or sets the width of the left panel.
    /// </summary>
    public double PanelWidth { get; set; } = 300;

    /// <summary>
    /// Switches to the properties panel.
    /// </summary>
    public void ShowPropertiesPanel()
    {
        ActivePanel = "Properties";
    }

    /// <summary>
    /// Switches to the preview panel.
    /// </summary>
    public void ShowPreviewPanel()
    {
        ActivePanel = "Preview";
    }

    /// <summary>
    /// Switches to the compare panel.
    /// </summary>
    public void ShowComparePanel()
    {
        ActivePanel = "Compare";
    }

    /// <summary>
    /// Switches to the search panel.
    /// </summary>
    public void ShowSearchPanel()
    {
        ActivePanel = "Search";
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
