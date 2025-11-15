namespace BookIt.Views;

using BookIt.ViewModels;
using Microsoft.UI.Xaml.Controls;

/// <summary>
/// Main editor control for displaying and editing documents.
/// </summary>
public partial class MainEditor : UserControl
{
    public MainEditor()
    {
        this.InitializeComponent();
        this.DataContext = new EditorViewModel();
    }
}
