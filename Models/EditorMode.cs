namespace BookIt.Models;

/// <summary>
/// Enumeration of editor modes for different editing contexts.
/// </summary>
/// <remarks>
/// Determines which editor UI and formatting options are displayed to the user.
/// Each mode provides a tailored editing experience for its document type.
/// </remarks>
public enum EditorMode
{
    /// <summary>Word processor mode for rich text formatting (RTF).</summary>
    WordProcessor,

    /// <summary>Code editor mode with syntax highlighting and language-specific features.</summary>
    CodeEditor,

    /// <summary>Markdown editor mode with preview and markdown-specific formatting.</summary>
    MarkdownEditor,

    /// <summary>HTML editor mode for web content creation.</summary>
    HTMLEditor
}
