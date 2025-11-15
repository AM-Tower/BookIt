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

        // If a DataContext (EditorViewModel) was provided by the host, use it and subscribe.
        if (this.DataContext is BookIt.ViewModels.EditorViewModel existingVm)
        {
            existingVm.SaveRequested += async () =>
            {
                try
                {
                    if (this.RichEditor != null)
                    {
                        await this.RichEditor.FlushToDocumentAsync();
                    }
                }
                catch
                {
                }
            };
        }
        else
        {
            var vm = new EditorViewModel();
            this.DataContext = vm;
            vm.SaveRequested += async () =>
            {
                try
                {
                    if (this.RichEditor != null)
                    {
                        await this.RichEditor.FlushToDocumentAsync();
                    }
                }
                catch
                {
                }
            };
        }
    }
}
