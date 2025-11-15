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
    }
}
