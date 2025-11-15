namespace BookIt.Services;

/// <summary>
/// Interface for theme management.
/// </summary>
/// <remarks>
/// Handles applying light/dark themes and managing UI color schemes.
/// Implemented by ThemeService.
/// </remarks>
public interface IThemeService
{
    /// <summary>
    /// Gets the current theme name.
    /// </summary>
    string CurrentTheme { get; }

    /// <summary>
    /// Applies a theme to the application.
    /// </summary>
    /// <param name="themeName">The theme name ("Light" or "Dark").</param>
    Task ApplyThemeAsync(string themeName);

    /// <summary>
    /// Gets the current theme color scheme.
    /// </summary>
    /// <returns>Dictionary of color names to values.</returns>
    Dictionary<string, string> GetColorScheme();

    /// <summary>
    /// Occurs when the theme changes.
    /// </summary>
    event EventHandler? ThemeChanged;
}
