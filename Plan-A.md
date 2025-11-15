# BookIt - Comprehensive Development Plan

**Project:** BookIt - Cross-Platform Word Processor & Code Editor  
**Date:** November 15, 2025  
**Version:** 1.0  
**License:** The Unlicense (Open Source, Free)  
**Framework:** Uno Platform (C#)  
**Target Platforms:** Windows, Linux, macOS, iOS, Android, WebAssembly  

---

## Table of Contents

1. [Project Overview](#project-overview)
2. [Application Goals](#application-goals)
3. [Platform Analysis](#platform-analysis)
4. [Technology Justification](#technology-justification)
5. [Architecture & Design](#architecture--design)
6. [File Structure](#file-structure)
7. [Core Components](#core-components)
8. [Implementation Phases](#implementation-phases)
9. [AI Prompts for Implementation](#ai-prompts-for-implementation)
10. [Testing Strategy](#testing-strategy)
11. [Specifications](#specifications)

---

## Project Overview

BookIt is a unified, cross-platform application combining a professional word processor with code editor capabilities. It supports multiple document formats (RTF, Markdown, HTML, Text, Code) with a single WYSIWYG interface and exports to PDF for publishing.

### Key Differentiators

- **No License Costs:** Uno Platform is free and open source (Apache 2.0)
- **Cross-Platform:** Single codebase for Windows, Linux, macOS, iOS, Android, WASM
- **Flexible Export:** RTF → PDF, Markdown, HTML, Code with consistent formatting
- **AI Integration:** Pluggable AI abstraction layer supporting Copilot, Ollama, local terminals
- **Professional Publishing:** Built-in book formatting (5×8", 6×9", etc.) ready for publishers
- **Developer Experience:** Easy to extend with new editors, modes, panels, and AI providers

---

## Application Goals

### Primary Goals

1. **Word Processing**
   - RTF, Markdown, HTML, and Text editing with WYSIWYG preview
   - Font, color, and style formatting
   - Table, image, and media embedding
   - Spell/grammar checking via AI

2. **Code Editing**
   - Syntax highlighting for C++, Python, JavaScript, HTML, CSS, Bash, C#, etc.
   - Code formatting and linting
   - Integrated terminal for execution
   - Diff/compare for code review

3. **Publishing**
   - Professional PDF export with book formatting
   - Table of contents generation
   - Chapter hierarchy (H1 title, H2 chapters, max 2 levels)
   - Self-publishing layout presets (5×8", 6×9", etc.)

4. **Monetization Path**
   - Open source core with free use
   - Commercial sell possible (no licensing restrictions)
   - Premium features (cloud sync, advanced AI models) optional
   - Custom builds for enterprises

---

## Platform Analysis

### Supported Platforms

| Platform      | Support | Notes |
|---------------|---------|-------|
| **Windows**   | ✓ Full  | Primary development platform. Desktop deployment via MSIX. |
| **Linux**     | ✓ Full  | GTK/Wayland backends via Uno. Snap/AppImage for distribution. |
| **macOS**     | ✓ Full  | AppKit backend. Code signing and notarization required. |
| **iOS**       | ✓ Full* | UIKit backend. File access via Documents folder. Limitation: No subprocess execution. **Workaround:** Use OS APIs for file operations; terminal features disabled on iOS. |
| **Android**   | ✓ Full* | Android backend. File access via scoped storage. **Workaround:** Use SAF (Storage Access Framework); limit terminal to ADB bridge. |
| **WebAssembly** | ✓ Full* | Browser-based. **Limitations:** No file I/O, subprocess execution. **Workaround:** Store projects in IndexedDB; use server-side code execution backend. |

### Platform Elimination & Workarounds

- **iOS/Android:** Cannot execute subprocesses directly → Use language server protocols (LSP) or server-side execution.
- **WASM:** No filesystem or process control → Implement IndexedDB storage + backend API for code execution.
- **All platforms:** AI integration via REST API eliminates subprocess/SSH dependencies.

---

## Technology Justification

### Uno Platform vs. Qt

| Aspect | Uno Platform | Qt |
|--------|--------------|-----|
| **License** | Apache 2.0 (Free) | LGPL or Commercial ($$$) |
| **Language** | C# (modern, familiar to MAUI developers) | C++ |
| **Cross-Platform** | Windows, Linux, macOS, iOS, Android, WASM | Windows, Linux, macOS, iOS, Android |
| **UI Toolkit** | XAML (declarative, similar to WPF) | QML/C++ (steep learning curve) |
| **Package Manager** | NuGet (mature ecosystem) | vcpkg/conan (fragmented) |
| **Community** | Growing; backed by Unoplatform (Jolla heritage) | Large but C++-focused |
| **Publishing** | Self-publishing-friendly | Requires commercial licensing for sales |

**Verdict:** Uno Platform is superior for this project due to **zero license costs**, **C# familiarity** (your MAUI experience transfers), and **self-publishing rights**.

---

## Architecture & Design

### System Architecture

```
┌─────────────────────────────────────────────────────────────┐
│                      BookIt Application                     │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌─────────────────┐  ┌──────────────────┐  ┌────────────┐ │
│  │  Main Editor    │  │  Left Panel      │  │ Right Panel│ │
│  │  (WYSIWYG)      │  │  (Properties,    │  │ (TOC,      │ │
│  │                 │  │   Compare,       │  │  Resources)│ │
│  │  - RTF Mode     │  │   Preview,       │  │            │ │
│  │  - Markdown     │  │   Search,        │  │            │ │
│  │  - Code Mode    │  │   Calculator,    │  │            │ │
│  │  - HTML Mode    │  │   Project List)  │  │            │ │
│  └─────────────────┘  └──────────────────┘  └────────────┘ │
│         │                     │                    │        │
│  ┌──────────────────────────────────────────────────────┐   │
│  │          Message Panel (Status & Notifications)      │   │
│  └──────────────────────────────────────────────────────┘   │
│                                                             │
│  ┌──────────────────────────────────────────────────────┐   │
│  │  Menu | Toolbar | Status Bar (Context-Aware)        │   │
│  └──────────────────────────────────────────────────────┘   │
│                                                             │
├─────────────────────────────────────────────────────────────┤
│                    Service Layer                           │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌──────────────┐  ┌──────────────┐  ┌────────────────┐   │
│  │ Editor       │  │ File System  │  │ AI Integration │   │
│  │ Services     │  │ Services     │  │ (Abstraction)  │   │
│  │              │  │              │  │                │   │
│  │ - Format     │  │ - Load/Save  │  │ - OpenAI       │   │
│  │ - Validate   │  │ - Export PDF │  │ - Ollama       │   │
│  │ - Compare    │  │ - Backup     │  │ - Local CLI    │   │
│  └──────────────┘  └──────────────┘  └────────────────┘   │
│                                                             │
│  ┌──────────────┐  ┌──────────────┐  ┌────────────────┐   │
│  │ Document     │  │ Project      │  │ Theme Service  │   │
│  │ Services     │  │ Services     │  │                │   │
│  │              │  │              │  │ - Light/Dark   │   │
│  │ - Parse RTF  │  │ - Load/Save  │  │ - Apply        │   │
│  │ - Parse MD   │  │ - Resource   │  │ - Icons        │   │
│  │ - Parse Code │  │ - Settings   │  │                │   │
│  └──────────────┘  └──────────────┘  └────────────────┘   │
│                                                             │
├─────────────────────────────────────────────────────────────┤
│                    Data Layer                              │
├─────────────────────────────────────────────────────────────┤
│                                                             │
│  ┌──────────────┐  ┌──────────────┐  ┌────────────────┐   │
│  │ JSON Storage │  │ SQLite DB    │  │ File System    │   │
│  │ (Projects,   │  │ (Cache,      │  │ (Documents,    │   │
│  │  Backup,     │  │  Index)      │  │  Resources)    │   │
│  │  Settings)   │  │              │  │                │   │
│  └──────────────┘  └──────────────┘  └────────────────┘   │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

### Core Design Patterns

1. **MVVM:** Main editor and panels follow Model-View-ViewModel pattern
2. **Service Locator:** Dependency injection for services (Editor, FileSystem, AI, Theme)
3. **Observer Pattern:** Document changes notify UI and trigger auto-save
4. **Command Pattern:** Undo/redo stack; menu/toolbar actions as commands
5. **Strategy Pattern:** Format handlers (RTF, Markdown, Code) implement common interface
6. **Abstract Factory:** AI provider selection (OpenAI, Ollama, Local CLI)

---

## File Structure

```
BookIt/
├── README.md                                    # Main documentation
├── Plan-A.md                                    # This file
├── LICENSE                                      # The Unlicense
├── .gitignore                                   # Git ignore rules
├── .gitattributes                               # Line ending normalization
├── BookIt.sln                                   # Solution file
├── BookIt/                                      # Main application project
│   ├── BookIt.csproj                            # Project file
│   ├── App.xaml                                 # App shell
│   ├── App.xaml.cs                              # App code-behind
│   ├── MainWindow.xaml                          # Main application window
│   ├── MainWindow.xaml.cs                       # Main window logic
│   ├── GlobalUsings.cs                          # Global using statements
│   │
│   ├── Models/                                  # Data models
│   │   ├── Document.cs                          # Document representation
│   │   ├── Project.cs                           # Project metadata
│   │   ├── DocumentFormat.cs                    # Format enum (RTF, MD, etc.)
│   │   ├── EditorMode.cs                        # Mode enum (Word, Code, etc.)
│   │   ├── Settings.cs                          # Application settings
│   │   └── SearchResult.cs                      # Search result model
│   │
│   ├── ViewModels/                              # MVVM ViewModels
│   │   ├── MainWindowViewModel.cs               # Main window logic
│   │   ├── EditorViewModel.cs                   # Editor panel logic
│   │   ├── LeftPanelViewModel.cs                # Left panel logic
│   │   ├── RightPanelViewModel.cs               # Right panel logic
│   │   ├── MessagePanelViewModel.cs             # Message panel logic
│   │   └── StatusBarViewModel.cs                # Status bar logic
│   │
│   ├── Views/                                   # XAML views
│   │   ├── MainEditor.xaml                      # Main editor control
│   │   ├── LeftPanel.xaml                       # Left panel control
│   │   ├── RightPanel.xaml                      # Right panel control
│   │   ├── MessagePanel.xaml                    # Message panel control
│   │   ├── StatusBar.xaml                       # Status bar control
│   │   └── Panels/                              # Left panel sub-views
│   │       ├── PropertiesPanel.xaml             # Properties view
│   │       ├── PreviewPanel.xaml                # Preview view
│   │       ├── ComparePanel.xaml                # Compare view
│   │       ├── SearchPanel.xaml                 # Search results view
│   │       ├── CalculatorPanel.xaml             # Calculator view
│   │       ├── ProjectPanel.xaml                # Project list view
│   │       ├── SettingsPanel.xaml               # Settings view
│   │       └── BugTrackerPanel.xaml             # Bug/feature tracker view
│   │
│   ├── Services/                                # Service layer
│   │   ├── IEditorService.cs                    # Editor service interface
│   │   ├── EditorService.cs                     # Editor implementation
│   │   ├── IFileSystemService.cs                # File system interface
│   │   ├── FileSystemService.cs                 # File system implementation
│   │   ├── IProjectService.cs                   # Project management interface
│   │   ├── ProjectService.cs                    # Project implementation
│   │   ├── IDocumentService.cs                  # Document service interface
│   │   ├── DocumentService.cs                   # Document implementation
│   │   ├── IThemeService.cs                     # Theme interface
│   │   ├── ThemeService.cs                      # Theme implementation
│   │   ├── IAIService.cs                        # AI abstraction interface
│   │   ├── AIServiceProvider.cs                 # AI provider factory
│   │   ├── OpenAIProvider.cs                    # OpenAI implementation
│   │   ├── OllamaProvider.cs                    # Ollama implementation
│   │   ├── LocalCLIProvider.cs                  # Local CLI implementation
│   │   ├── IMessageService.cs                   # Message queue interface
│   │   └── MessageService.cs                    # Message queue implementation
│   │
│   ├── Formats/                                 # Document format handlers
│   │   ├── IDocumentFormat.cs                   # Format interface
│   │   ├── RTFFormat.cs                         # RTF handler
│   │   ├── MarkdownFormat.cs                    # Markdown handler
│   │   ├── PlainTextFormat.cs                   # Text handler
│   │   ├── CodeFormat.cs                        # Code handler
│   │   └── HTMLFormat.cs                        # HTML handler
│   │
│   ├── Editors/                                 # Editor implementations
│   │   ├── IRichTextEditor.cs                   # Rich text interface
│   │   ├── RichTextEditor.xaml                  # RTF editor view
│   │   ├── RichTextEditor.xaml.cs               # RTF editor code
│   │   ├── MarkdownEditor.xaml                  # Markdown editor view
│   │   ├── MarkdownEditor.xaml.cs               # Markdown editor code
│   │   ├── CodeEditor.xaml                      # Code editor view
│   │   └── CodeEditor.xaml.cs                   # Code editor code
│   │
│   ├── Tools/                                   # Utility classes
│   │   ├── Comparison/
│   │   │   ├── IComparator.cs                   # Comparison interface
│   │   │   ├── CodeComparator.cs                # Code diff implementation
│   │   │   ├── LCS.cs                           # Longest Common Subsequence
│   │   │   └── DiffResult.cs                    # Diff result model
│   │   ├── Export/
│   │   │   ├── PDFExporter.cs                   # PDF export
│   │   │   ├── HTMLExporter.cs                  # HTML export
│   │   │   └── MarkdownExporter.cs              # Markdown export
│   │   ├── Parser/
│   │   │   ├── RTFParser.cs                     # RTF parsing
│   │   │   ├── MarkdownParser.cs                # Markdown parsing
│   │   │   └── CodeParser.cs                    # Code parsing
│   │   ├── Syntax/
│   │   │   ├── SyntaxHighlighter.cs             # Syntax highlighting
│   │   │   ├── LanguageDefinition.cs            # Language definitions
│   │   │   └── TokenType.cs                     # Token types
│   │   ├── Calculator/
│   │   │   ├── ArbitraryPrecisionCalculator.cs  # Calculator engine
│   │   │   └── Expression.cs                    # Expression parsing
│   │   └── Search/
│   │       ├── DocumentSearcher.cs              # Document search
│   │       └── Indexer.cs                       # Search indexing
│   │
│   ├── Resources/                               # Application resources
│   │   ├── Strings/
│   │   │   ├── en.resw                          # English strings
│   │   │   ├── es.resw                          # Spanish strings
│   │   │   ├── fr.resw                          # French strings
│   │   │   └── [other languages].resw           # Other language strings
│   │   ├── Icons/
│   │   │   ├── Light/                           # Light theme icons
│   │   │   │   ├── file_new.png                 # New file icon
│   │   │   │   ├── file_open.png                # Open file icon
│   │   │   │   └── [other icons].png            # Other icons
│   │   │   └── Dark/                            # Dark theme icons
│   │   │       ├── file_new.png                 # New file icon (dark)
│   │   │       └── [other icons].png            # Other icons (dark)
│   │   └── Themes/
│   │       ├── Light.xaml                       # Light theme
│   │       └── Dark.xaml                        # Dark theme
│   │
│   ├── Platforms/                               # Platform-specific code
│   │   ├── Windows/
│   │   │   └── Program.cs                       # Windows entry point
│   │   ├── Linux/
│   │   │   └── Program.cs                       # Linux entry point
│   │   ├── macOS/
│   │   │   └── Program.cs                       # macOS entry point
│   │   ├── iOS/
│   │   │   └── Program.cs                       # iOS entry point (limited)
│   │   ├── Android/
│   │   │   └── Program.cs                       # Android entry point (limited)
│   │   └── WebAssembly/
│   │       └── Program.cs                       # WASM entry point
│   │
│   └── Helpers/                                 # Helper utilities
│       ├── Constants.cs                         # Application constants
│       ├── Extensions.cs                        # Extension methods
│       ├── Validators.cs                        # Input validators
│       └── Logger.cs                            # Logging utility
│
├── BookIt.Tests/                                # Unit tests project
│   ├── BookIt.Tests.csproj                      # Test project file
│   ├── UnitTest1.cs                             # Sample test
│   ├── Services/
│   │   ├── EditorServiceTests.cs                # Editor service tests
│   │   ├── FileSystemServiceTests.cs            # File system tests
│   │   └── DocumentServiceTests.cs              # Document tests
│   ├── Tools/
│   │   ├── ComparatorTests.cs                   # Comparator tests
│   │   ├── ExporterTests.cs                     # Exporter tests
│   │   └── ParserTests.cs                       # Parser tests
│   └── Mocks/
│       └── MockFileSystem.cs                    # Mock file system
│
├── .github/                                     # GitHub configuration
│   ├── workflows/
│   │   └── ci.yml                               # CI/CD workflow
│   ├── CODEOWNERS                               # Code owners
│   ├── SECURITY.md                              # Security policy
│   ├── pull_request_template.md                 # PR template
│   └── ISSUE_TEMPLATE/
│       ├── bug_report.md                        # Bug template
│       └── feature_request.md                   # Feature template
│
├── Directory.Packages.props                     # Central package management
├── .gitignore                                   # Git ignore rules
└── .env.example                                 # Environment example

```

---

## Core Components

### 1. Document Model

```csharp
/// <summary>
/// Represents a single document with format, content, and metadata
/// </summary>
public class Document
{
    public string Id { get; set; }                      // Unique identifier
    public string Title { get; set; }                   // Document title
    public DocumentFormat Format { get; set; }          // RTF, Markdown, Text, Code, HTML
    public string Content { get; set; }                 // Raw document content
    public EditorMode Mode { get; set; }                // Editing mode
    public string Language { get; set; }                // Code language (C++, Python, etc.)
    public DateTime CreatedAt { get; set; }             // Creation timestamp
    public DateTime ModifiedAt { get; set; }            // Last modification
    public bool IsDirty { get; set; }                   // Has unsaved changes
    public Dictionary<string, object> Metadata { get; set; } // Custom metadata
}

public enum DocumentFormat
{
    RTF,        // Rich Text Format
    Markdown,   // Markdown (.md)
    PlainText,  // Plain text (.txt)
    Code,       // Source code
    HTML        // HTML document
}

public enum EditorMode
{
    WordProcessor,  // Word processing mode (RTF)
    CodeEditor,     // Code editor mode
    MarkdownEditor, // Markdown mode
    HTMLEditor      // HTML mode
}
```

### 2. Project Model

```csharp
/// <summary>
/// Represents a project containing multiple documents
/// </summary>
public class Project
{
    public string Id { get; set; }                          // Unique ID
    public string Name { get; set; }                        // Project name
    public string Description { get; set; }                 // Project description
    public string RootPath { get; set; }                    // Root folder path
    public string ResourcePath { get; set; }                // Resources folder
    public List<Document> Documents { get; set; }           // All documents
    public ProjectSettings Settings { get; set; }           // Project-specific settings
    public DateTime CreatedAt { get; set; }                 // Creation timestamp
    public DateTime ModifiedAt { get; set; }                // Last modification
}

public class ProjectSettings
{
    public string BookFormat { get; set; }                  // "5x8", "6x9", etc.
    public int AutoSaveIntervalSeconds { get; set; }        // Auto-save interval
    public string Theme { get; set; }                       // Light or Dark
    public string Language { get; set; }                    // UI language
    public Dictionary<string, string> CustomVariables { get; set; } // Custom variables
}
```

### 3. Service Interfaces

#### EditorService
```csharp
public interface IEditorService
{
    Task<string> FormatTextAsync(string content, DocumentFormat format);
    Task<string> ValidateAsync(string content, DocumentFormat format);
    Task<List<SearchResult>> SearchAsync(string query, SearchScope scope);
    Task<UndoRedoStack> GetUndoRedoStackAsync();
    Task ApplyStyleAsync(TextRange range, TextStyle style);
}
```

#### FileSystemService
```csharp
public interface IFileSystemService
{
    Task<Document> LoadDocumentAsync(string filePath);
    Task SaveDocumentAsync(Document document, string filePath);
    Task<string> ExportToPdfAsync(Document document, string outputPath);
    Task<string> ExportToMarkdownAsync(Document document, string outputPath);
    Task<string> ExportToHtmlAsync(Document document, string outputPath);
    Task BackupProjectAsync(Project project);
    Task RestoreFromBackupAsync(string backupPath, string targetPath);
}
```

#### AIService (Abstraction)
```csharp
public interface IAIService
{
    Task<string> SpellCheckAsync(string text);
    Task<string> GrammarCheckAsync(string text);
    Task<string> SummarizeAsync(string text);
    Task<string> GenerateAsync(string prompt, AIOptions options);
    Task<List<string>> TranslateAsync(string text, string targetLanguage);
}

public class AIServiceProvider
{
    public static IAIService CreateProvider(AIProviderType type, AIConfig config)
    {
        return type switch
        {
            AIProviderType.OpenAI => new OpenAIProvider(config),
            AIProviderType.Ollama => new OllamaProvider(config),
            AIProviderType.LocalCLI => new LocalCLIProvider(config),
            _ => throw new ArgumentException("Unknown provider type")
        };
    }
}
```

### 4. Comparison Engine

```csharp
/// <summary>
/// Code comparison using LCS (Longest Common Subsequence) algorithm
/// </summary>
public class CodeComparator : IComparator
{
    private readonly LCS _lcs = new LCS();

    /// <summary>
    /// Compare two code blocks and return detailed diff results
    /// </summary>
    /// <param name="original">Original code</param>
    /// <param name="modified">Modified code</param>
    /// <returns>Detailed diff results with function-level analysis</returns>
    public DiffResult Compare(string original, string modified)
    {
        var result = new DiffResult();
        var originalFunctions = ExtractFunctions(original);
        var modifiedFunctions = ExtractFunctions(modified);

        foreach (var func in originalFunctions)
        {
            if (modifiedFunctions.TryGetValue(func.Key, out var modFunc))
            {
                var bodyDiff = _lcs.Compute(func.Value.Body, modFunc.Body);
                if (bodyDiff.HasChanges)
                    result.Changed.Add((func.Key, bodyDiff));
            }
            else
            {
                result.Removed.Add(func.Key);
            }
        }

        foreach (var func in modifiedFunctions)
        {
            if (!originalFunctions.ContainsKey(func.Key))
                result.Added.Add(func.Key);
        }

        return result;
    }

    private Dictionary<string, CodeFunction> ExtractFunctions(string code)
    {
        // Parse code and extract function definitions
        // Implementation uses regex and AST parsing
        throw new NotImplementedException();
    }
}
```

---

## Implementation Phases

### Phase 1: Foundation (Weeks 1-2)
- [ ] Project setup with Uno Platform structure
- [ ] Main window layout with splitters
- [ ] Basic editor control (placeholder)
- [ ] Left panel framework
- [ ] Right panel framework
- [ ] Message panel framework
- [ ] Menu and toolbar skeleton
- [ ] Settings and project models

**Deliverables:**
- Runnable application with empty panels
- No document loading yet
- UI layout working with splitters

### Phase 2: Document & Format System (Weeks 3-4)
- [ ] Document model and storage
- [ ] RTF format handler
- [ ] Markdown format handler
- [ ] Plain text format handler
- [ ] Code format handler
- [ ] HTML format handler
- [ ] File load/save service
- [ ] Auto-save mechanism

**Deliverables:**
- Load/save documents in all formats
- Format auto-detection
- Auto-save to JSON/SQLite

### Phase 3: Rich Text Editor (Weeks 5-7)
- [ ] RTF editor control
- [ ] Formatting toolbar (bold, italic, color, font)
- [ ] Style application (H1-H6, P, etc.)
- [ ] Table and image insertion
- [ ] Character/paragraph formatting
- [ ] Undo/redo stack

**Deliverables:**
- Functional word processor for RTF
- Formatting toolbar works
- Basic WYSIWYG editing

### Phase 4: Code Editor (Weeks 8-9)
- [ ] Code editor control
- [ ] Syntax highlighting (C++, Python, JS, etc.)
- [ ] Line numbers
- [ ] Code folding
- [ ] Bracket matching
- [ ] Language detection

**Deliverables:**
- Functional code editor
- Multiple language support
- Syntax highlighting

### Phase 5: Comparison & Search (Weeks 10-11)
- [ ] Comparison engine (LCS algorithm)
- [ ] Function extraction
- [ ] Diff rendering
- [ ] Document search (full-text)
- [ ] Advanced search (tags, dates, etc.)
- [ ] Search results panel

**Deliverables:**
- Side-by-side code comparison
- Full-text and advanced search
- Search results panel

### Phase 6: PDF Export & Publishing (Weeks 12-13)
- [ ] PDF exporter
- [ ] Book formatting templates
- [ ] Table of contents generation
- [ ] Page numbering
- [ ] Header/footer support
- [ ] Book layout presets (5×8", 6×9", etc.)

**Deliverables:**
- PDF export with professional formatting
- Self-publishing-ready output

### Phase 7: AI Integration (Weeks 14-15)
- [ ] AI service abstraction
- [ ] OpenAI provider
- [ ] Ollama provider
- [ ] Local CLI provider
- [ ] AI panel in left sidebar
- [ ] Spell/grammar checking
- [ ] Translation support

**Deliverables:**
- Pluggable AI providers
- AI features in main editor
- Multi-language support

### Phase 8: Advanced Features (Weeks 16-17)
- [ ] Calculator panel with arbitrary precision
- [ ] Event tracker
- [ ] Bug/feature tracker
- [ ] Theme switching (light/dark)
- [ ] Project management
- [ ] Backup/restore

**Deliverables:**
- All panels functional
- Light/dark themes
- Project management

### Phase 9: Testing & Optimization (Weeks 18-19)
- [ ] Unit tests for all services
- [ ] Integration tests
- [ ] UI tests
- [ ] Performance profiling
- [ ] Cross-platform testing

**Deliverables:**
- Full test coverage
- No compiler warnings
- Optimized performance

### Phase 10: Deployment & Documentation (Weeks 20+)
- [ ] README and user guides
- [ ] API documentation
- [ ] Build scripts for all platforms
- [ ] CI/CD pipeline
- [ ] Release process

**Deliverables:**
- Production-ready application
- Full documentation
- Easy deployment

---

## AI Prompts for Implementation

### Step 1: Create Project Structure

```
Prompt: I'm starting a BookIt cross-platform word processor project using Uno Platform and C#. 
Create the folder structure and basic project files for:

1. Models folder with: Document.cs, Project.cs, DocumentFormat.cs, EditorMode.cs
2. ViewModels folder with main view models
3. Views folder with XAML controls
4. Services folder with interfaces and implementations
5. Tools folder with comparison and export utilities

Provide complete C# class stubs with proper namespacing and Doxygen documentation headers.
```

### Step 2: Create Main Application Shell

```
Prompt: Create the main application window (MainWindow.xaml and MainWindow.xaml.cs) for BookIt using Uno Platform.

Requirements:
- Main editor in center (placeholder for now)
- Resizable left panel (property panel, compare, preview, etc.)
- Resizable right panel (table of contents, resources)
- Message panel at bottom
- Menu and toolbar
- Status bar
- Use XAML Grid with splitters for resizable sections
- All panels should be collapsible

Provide both XAML and C# code with comprehensive Doxygen comments.
```

### Step 3: Create Document Service

```
Prompt: Create the DocumentService class for BookIt that handles:

1. Loading documents from RTF, Markdown, Text, and Code files
2. Saving documents in all formats
3. Detecting file format automatically
4. Creating new documents
5. Managing document metadata

Requirements:
- Implement IDocumentService interface
- Use async/await throughout
- Handle file errors gracefully
- Return appropriate error messages
- Full Doxygen documentation

Provide complete, production-ready code.
```

### Step 4: Create File Format Handlers

```
Prompt: Create format handler classes for BookIt:

1. RTFFormat.cs - Parse and generate RTF documents
2. MarkdownFormat.cs - Parse and generate Markdown documents
3. PlainTextFormat.cs - Handle plain text
4. CodeFormat.cs - Detect code language and preserve formatting
5. HTMLFormat.cs - Parse and generate HTML

Requirements:
- All implement IDocumentFormat interface
- Handle encoding correctly
- Preserve formatting information
- Return structured data

Provide complete implementations with Doxygen documentation.
```

### Step 5: Create Rich Text Editor Control

```
Prompt: Create the RichTextEditor XAML control for BookIt (RichTextEditor.xaml and RichTextEditor.xaml.cs).

Requirements:
- XAML-based text editor with formatting
- Bold, italic, underline buttons
- Font selector
- Color picker
- H1-H6 heading styles
- Paragraph formatting (left, center, right, justify)
- Undo/redo buttons
- Character and word count display
- Line numbers
- Support copy/paste with formatting

Provide both XAML layout and C# code-behind with complete documentation.
```

### Step 6: Create Code Editor Control

```
Prompt: Create the CodeEditor XAML control for BookIt (CodeEditor.xaml and CodeEditor.xaml.cs).

Requirements:
- Syntax highlighting for C++, Python, JavaScript, HTML, CSS, Bash, C#
- Line numbers
- Code folding
- Bracket matching
- Indentation guides
- Search and replace in current file
- Language auto-detection
- Tab/space indentation support
- Minimap for large files

Provide complete XAML and C# implementation with Doxygen documentation.
```

### Step 7: Create Comparison Engine

```
Prompt: Create the CodeComparator class for BookIt that compares two code blocks.

Requirements:
- Extract functions from code
- Compare function bodies line-by-line
- Use LCS (Longest Common Subsequence) algorithm
- Mark changes: " " (unchanged), "+" (added), "-" (deleted), "~" (reordered)
- Identify functions: added, removed, changed
- Normalize whitespace before comparing
- Return structured DiffResult with all changes

Requirements:
- Complete, production-ready implementation
- LCS algorithm must be O(m*n) complexity
- Handle edge cases
- Full Doxygen documentation
- Include unit tests

Provide complete code ready for use.
```

### Step 8: Create PDF Exporter

```
Prompt: Create the PDFExporter class for BookIt that exports documents to PDF.

Requirements:
- Support book formatting: 5"×8", 5.25"×8", 5.5"×8.5", 6"×9", 6.14"×9.21", 7"×10", 8"×10", 8.5"×11"
- Set up margins: Inside 0.75", Outside 0.5", Top/Bottom 0.7", Gutter 0.13"-0.25"
- Add page numbers (odd right, even left)
- Generate table of contents
- Support headers and footers
- Preserve formatting from RTF source
- Handle images and embedded media

Requirements:
- Use a third-party library (iTextSharp or similar open source)
- Complete implementation
- Support all book sizes
- Full Doxygen documentation

Provide production-ready code.
```

### Step 9: Create AI Service Abstraction

```
Prompt: Create the AI service abstraction layer for BookIt.

Create these files:
1. IAIService.cs - Interface with methods: SpellCheckAsync, GrammarCheckAsync, SummarizeAsync, GenerateAsync, TranslateAsync
2. AIServiceProvider.cs - Factory to create providers
3. OpenAIProvider.cs - Implementation for OpenAI API
4. OllamaProvider.cs - Implementation for Ollama local models
5. LocalCLIProvider.cs - Implementation for local CLI tools

Requirements:
- All async operations
- Configuration-based API keys and endpoints
- Error handling and retries
- Support for multiple models
- Logging support
- Unit tests for each provider

Provide complete implementations with Doxygen documentation.
```

### Step 10: Create Message Service

```
Prompt: Create the MessageService for BookIt that manages a message queue for status updates and notifications.

Requirements:
- Queue-based, non-blocking message display
- Categorize messages: Error (red), Warning (orange/magenta), Info (theme color), Success (green)
- Timeout per message (configurable)
- FIFO queue processing
- Support markdown in messages
- Thread-safe implementation
- Observable pattern for UI updates

Provide complete implementation with unit tests and documentation.
```

---

## Testing Strategy

### Unit Tests

**EditorService Tests**
```csharp
[TestClass]
public class EditorServiceTests
{
    [TestMethod]
    public async Task FormatText_WithValidRTF_ReturnsFormattedText()
    {
        // Arrange
        var service = new EditorService();
        var content = "Hello **World**";
        
        // Act
        var result = await service.FormatTextAsync(content, DocumentFormat.Markdown);
        
        // Assert
        Assert.IsNotNull(result);
        Assert.IsTrue(result.Contains("<strong>"));
    }
}
```

**Comparator Tests**
```csharp
[TestClass]
public class ComparatorTests
{
    [TestMethod]
    public void Compare_WithIdenticalCode_NoChanges()
    {
        // Arrange
        var comparator = new CodeComparator();
        var code = "void foo() { return; }";
        
        // Act
        var result = comparator.Compare(code, code);
        
        // Assert
        Assert.AreEqual(0, result.Changed.Count);
        Assert.AreEqual(0, result.Added.Count);
        Assert.AreEqual(0, result.Removed.Count);
    }
}
```

### Integration Tests

Test file load/save cycle, format conversions, export to PDF.

### UI Tests

Test main editor, panels, menu/toolbar actions.

### Cross-Platform Tests

Verify on Windows, Linux, macOS, iOS, Android, WebAssembly.

---

## Specifications

### Supported Document Formats

| Format | Extension | Read | Write | Export |
|--------|-----------|------|-------|--------|
| RTF | .rtf | ✓ | ✓ | ✓ |
| Markdown | .md | ✓ | ✓ | ✓ |
| Plain Text | .txt | ✓ | ✓ | ✓ |
| Code (auto-detect) | .cpp, .py, .js, .cs, etc. | ✓ | ✓ | ✓ |
| HTML | .html | ✓ | ✓ | ✓ |
| PDF (export only) | .pdf | ✗ | ✓ | ✓ |

### Supported Programming Languages

- C++ (.cpp, .h, .hpp)
- Python (.py)
- JavaScript (.js, .jsx)
- TypeScript (.ts, .tsx)
- C# (.cs)
- Java (.java)
- Go (.go)
- Rust (.rs)
- HTML (.html)
- CSS (.css)
- Bash/Shell (.sh)
- SQL (.sql)

### UI Languages

- English (en) [Default]
- Spanish (es)
- French (fr)
- German (de)
- Arabic (ar)
- Portuguese (pt)
- Japanese (ja)
- Russian (ru)
- Hindi (hi)
- Korean (ko)
- Turkish (tr)
- Italian (it)
- Dutch (nl)
- Indonesian (id)
- Vietnamese (vi)
- Chinese Simplified (zh-CN)
- Chinese Traditional (zh-TW)
- Chinese Hong Kong (zh-HK)

### Book Formatting Presets

| Preset | Trim Size | Common Use |
|--------|-----------|-----------|
| Small | 5" × 8" | Novellas, small fiction |
| Slim | 5.25" × 8" | Memoirs, poetry |
| Standard | 5.5" × 8.5" | Fiction, nonfiction |
| Trade | 6" × 9" | Most popular trade paperback |
| Academic | 6.14" × 9.21" | Academic, professional |
| Technical | 7" × 10" | Technical manuals, textbooks |
| Large | 8" × 10" | Workbooks, children's books |
| Letter | 8.5" × 11" | Large-format, photo books |
| Landscape | 11" × 8.5" | Presentations |

### Performance Targets

| Metric | Target |
|--------|--------|
| Application startup | < 2 seconds |
| File open (10 MB) | < 5 seconds |
| File save | < 2 seconds |
| PDF export | < 10 seconds |
| Search (1000 documents) | < 3 seconds |
| AI operation (avg) | < 5 seconds |

---

## Recommendations

### Framework Choice

✓ **Uno Platform** is the right choice because:
- Zero license cost (Apache 2.0)
- C# familiar to MAUI developers
- True cross-platform (Windows, Linux, macOS, iOS, Android, WASM)
- XAML-based UI (similar to WPF/MAUI)
- Active community and good documentation

### Third-Party Libraries

**Open Source & Free:**

1. **PDF Generation:** iTextSharp (AGPL alternative exists as open source)
2. **Markdown Parsing:** Markdig
3. **RTF Handling:** RTF.io or similar
4. **JSON Storage:** System.Text.Json (built-in)
5. **SQLite:** Microsoft.Data.Sqlite
6. **AI APIs:** Official SDKs (OpenAI, Ollama)
7. **Icons:** Material Design Icons or FontAwesome (open source versions)
8. **Code Syntax:** Roslyn (for C# parsing)

### Development Tools

- **IDE:** Visual Studio Code + C# Dev Kit (free)
- **Testing:** xUnit + Moq
- **CI/CD:** GitHub Actions (free for public repos)
- **Documentation:** Doxygen + Sphinx

### Monetization Path

1. **Free Open Source:** Core application on GitHub
2. **Premium SaaS:** Cloud sync, AI model credits, advanced features
3. **Commercial Sales:** License for enterprise deployments (while maintaining open source core)
4. **Services:** Consulting for custom features, training

---

## Conclusion

BookIt is a comprehensive, cross-platform word processor and code editor designed for professional publishing and development. Using Uno Platform ensures zero licensing costs, true cross-platform support, and a clear path to commercial success while maintaining an open-source foundation.

The phased implementation approach allows for iterative development and testing, with AI and advanced features added after core functionality is solid.

Start with Phase 1 (foundation) and proceed step-by-step. Each phase builds on the previous, ensuring a stable, tested application throughout development.

---

**Document Revision:** 1.0  
**Last Updated:** November 15, 2025  
**Status:** Ready for Implementation  
**Next Steps:** Begin Phase 1 - Project Foundation
