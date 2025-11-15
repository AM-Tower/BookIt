namespace BookIt.Services;

using BookIt.Models;

/// <summary>
/// Interface for AI service abstraction (OpenAI, Ollama, Local CLI).
/// </summary>
/// <remarks>
/// Provides a unified interface for interacting with different AI providers.
/// Implemented by provider-specific classes (OpenAIProvider, OllamaProvider, LocalCLIProvider).
/// </remarks>
public interface IAIService
{
    /// <summary>
    /// Checks spelling in the given text.
    /// </summary>
    /// <param name="text">The text to spell-check.</param>
    /// <returns>List of spelling errors with suggestions.</returns>
    Task<List<SpellingError>> SpellCheckAsync(string text);

    /// <summary>
    /// Checks grammar in the given text.
    /// </summary>
    /// <param name="text">The text to grammar-check.</param>
    /// <returns>List of grammar errors with suggestions.</returns>
    Task<List<GrammarError>> GrammarCheckAsync(string text);

    /// <summary>
    /// Summarizes the given text.
    /// </summary>
    /// <param name="text">The text to summarize.</param>
    /// <returns>Summarized version of the text.</returns>
    Task<string> SummarizeAsync(string text);

    /// <summary>
    /// Generates text based on a prompt.
    /// </summary>
    /// <param name="prompt">The generation prompt.</param>
    /// <param name="options">Generation options (temperature, max tokens, etc.).</param>
    /// <returns>Generated text.</returns>
    Task<string> GenerateAsync(string prompt, AIGenerationOptions options);

    /// <summary>
    /// Translates text to the target language.
    /// </summary>
    /// <param name="text">The text to translate.</param>
    /// <param name="targetLanguage">The target language code (e.g., "es", "fr").</param>
    /// <returns>Translated text.</returns>
    Task<string> TranslateAsync(string text, string targetLanguage);

    /// <summary>
    /// Gets whether the service is available and connected.
    /// </summary>
    /// <returns>True if the service is available; otherwise false.</returns>
    Task<bool> IsAvailableAsync();
}

/// <summary>
/// Represents a spelling error found in text.
/// </summary>
public class SpellingError
{
    public int Position { get; set; }
    public string Word { get; set; } = string.Empty;
    public List<string> Suggestions { get; set; } = new();
}

/// <summary>
/// Represents a grammar error found in text.
/// </summary>
public class GrammarError
{
    public int Position { get; set; }
    public int Length { get; set; }
    public string Message { get; set; } = string.Empty;
    public List<string> Suggestions { get; set; } = new();
}

/// <summary>
/// Options for AI text generation.
/// </summary>
public class AIGenerationOptions
{
    public float Temperature { get; set; } = 0.7f;
    public int MaxTokens { get; set; } = 100;
    public float TopP { get; set; } = 1.0f;
    public Dictionary<string, object>? AdditionalOptions { get; set; }
}
