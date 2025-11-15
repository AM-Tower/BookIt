namespace BookIt.Views;

using BookIt.ViewModels;
using Microsoft.UI.Xaml.Controls;

/// <summary>
/// Status bar control for displaying editor statistics and information.
/// </summary>
public partial class StatusBar : UserControl
{
    public StatusBar()
    {
        this.InitializeComponent();
        this.DataContext = new StatusBarViewModel();
    }
}
