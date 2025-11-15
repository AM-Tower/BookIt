namespace BookIt;

using BookIt.ViewModels;

/// <summary>
/// Main page of the BookIt application.
/// </summary>
/// <remarks>
/// This page contains the main window layout with:
/// - Menu bar and toolbar
/// - Left panel (properties, compare, preview, search)
/// - Center panel (main editor)
/// - Right panel (table of contents, resources)
/// - Message panel (status and notifications)
/// - Status bar (line, column, word count, etc.)
/// </remarks>
public sealed partial class MainPage : Page
{
    private readonly MainWindowViewModel _viewModel;

    public MainPage()
    {
        this.InitializeComponent();
        _viewModel = new MainWindowViewModel();
        this.DataContext = _viewModel;

        // Wire the shared EditorViewModel into the MainEditor control so save/flush works end-to-end
        try
        {
            if (this.MainEditorControl != null)
            {
                this.MainEditorControl.DataContext = _viewModel.Editor;
            }
        }
        catch
        {
            // best-effort wiring
        }
    }
}
