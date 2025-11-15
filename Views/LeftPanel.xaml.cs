namespace BookIt.Views;

using BookIt.ViewModels;
using Microsoft.UI.Xaml.Controls;

/// <summary>
/// Left panel control for properties, compare, preview, and search.
/// </summary>
public partial class LeftPanel : UserControl
{
    public LeftPanel()
    {
        this.InitializeComponent();
        this.DataContext = new LeftPanelViewModel();
    }
}
