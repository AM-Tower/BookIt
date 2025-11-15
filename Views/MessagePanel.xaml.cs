namespace BookIt.Views;

using BookIt.ViewModels;
using Microsoft.UI.Xaml.Controls;

/// <summary>
/// Message panel control for displaying status messages and notifications.
/// </summary>
public partial class MessagePanel : UserControl
{
    public MessagePanel()
    {
        this.InitializeComponent();
        this.DataContext = new MessagePanelViewModel();
    }
}
