namespace BookIt.Views;

using BookIt.ViewModels;
using Microsoft.UI.Xaml.Controls;

/// <summary>
/// Right panel control for table of contents and resources.
/// </summary>
public partial class RightPanel : UserControl
{
    public RightPanel()
    {
        this.InitializeComponent();
        this.DataContext = new RightPanelViewModel();
    }
}
