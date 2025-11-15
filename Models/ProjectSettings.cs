namespace BookIt.Models;

/// <summary>
/// Represents project-specific settings and configuration.
/// </summary>
/// <remarks>
/// Contains all user preferences and settings for a project including
/// formatting options, auto-save behavior, UI preferences, and custom variables.
/// </remarks>
public class ProjectSettings
{
    /// <summary>
    /// Gets or sets the book format preset name.
    /// </summary>
    /// <value>One of: "5x8", "5.25x8", "5.5x8.5", "6x9", "6.14x9.21", "7x10", "8x10", "8.5x11".</value>
    public string BookFormat { get; set; } = "6x9";

    /// <summary>
    /// Gets or sets the auto-save interval in seconds.
    /// </summary>
    /// <value>Zero or negative values disable auto-save. Recommended: 60 seconds.</value>
    public int AutoSaveIntervalSeconds { get; set; } = 60;

    /// <summary>
    /// Gets or sets the current theme name.
    /// </summary>
    /// <value>Either "Light" or "Dark".</value>
    public string Theme { get; set; } = "Light";

    /// <summary>
    /// Gets or sets the UI language code.
    /// </summary>
    /// <value>Language code such as "en", "es", "fr", "de", etc.</value>
    public string Language { get; set; } = "en";

    /// <summary>
    /// Gets or sets whether line numbers are shown in the editor.
    /// </summary>
    /// <value>True to display line numbers; otherwise false.</value>
    public bool ShowLineNumbers { get; set; } = true;

    /// <summary>
    /// Gets or sets whether word wrap is enabled.
    /// </summary>
    /// <value>True to wrap long lines; otherwise false.</value>
    public bool WordWrapEnabled { get; set; } = true;

    /// <summary>
    /// Gets or sets the font family name for the editor.
    /// </summary>
    /// <value>System font name such as "Consolas", "Monaco", "DejaVu Sans Mono".</value>
    public string FontFamily { get; set; } = "Consolas";

    /// <summary>
    /// Gets or sets the editor font size in points.
    /// </summary>
    /// <value>Font size between 8 and 72 points. Default: 12.</value>
    public int FontSize { get; set; } = 12;

    /// <summary>
    /// Gets or sets custom project variables for templating and dynamic values.
    /// </summary>
    /// <value>Dictionary of variable names to values, e.g., "author" -> "John Doe".</value>
    public Dictionary<string, string> CustomVariables { get; set; } = new();

    /// <summary>
    /// Gets or sets the maximum recent files to remember.
    /// </summary>
    /// <value>Number of recent files to display in the File menu.</value>
    public int MaxRecentFiles { get; set; } = 10;

    /// <summary>
    /// Gets or sets whether smart indentation is enabled.
    /// </summary>
    /// <value>True to automatically indent new lines; otherwise false.</value>
    public bool SmartIndentEnabled { get; set; } = true;

    /// <summary>
    /// Gets or sets the indentation size in spaces.
    /// </summary>
    /// <value>Number of spaces per indentation level.</value>
    public int IndentationSize { get; set; } = 4;

    /// <summary>
    /// Gets or sets whether tabs are converted to spaces.
    /// </summary>
    /// <value>True to use spaces for indentation; false to use tab characters.</value>
    public bool ConvertTabsToSpaces { get; set; } = true;
}
