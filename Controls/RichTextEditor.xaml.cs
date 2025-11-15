using System;
using System.Text.Json;
using System.Threading.Tasks;
using BookIt.Models;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;

namespace BookIt.Controls
{
    public partial class RichTextEditor : UserControl
{
    public static readonly DependencyProperty DocumentProperty = DependencyProperty.Register(
        nameof(Document), typeof(Document), typeof(RichTextEditor), new PropertyMetadata(null, OnDocumentChanged));

    public Document Document
    {
        get => (Document)GetValue(DocumentProperty);
        set => SetValue(DocumentProperty, value);
    }

    public RichTextEditor()
    {
        this.InitializeComponent();
        EditorWebView.NavigationCompleted += EditorWebView_NavigationCompleted;
        EditorWebView.NavigateToString(EditorHtml);
    }

    private static void OnDocumentChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        var control = (RichTextEditor)d;
        _ = control.SyncDocumentToEditorAsync();
    }

    private async void EditorWebView_NavigationCompleted(WebView sender, WebViewNavigationCompletedEventArgs args)
    {
        await SyncDocumentToEditorAsync();
    }

    private async Task SyncDocumentToEditorAsync()
    {
        if (Document == null)
            return;

        var html = Document.Content ?? string.Empty;
        await SetHtmlAsync(html);
    }

    public async Task SetHtmlAsync(string html)
    {
        if (EditorWebView == null)
            return;

        try
        {
            var payload = JsonSerializer.Serialize(html);
            await EditorWebView.InvokeScriptAsync("eval", new[] { $"window.setHtmlContent({payload});" });
        }
        catch
        {
            // Best-effort: some platforms may not support InvokeScriptAsync exactly the same way.
        }
    }

    public async Task<string?> GetHtmlAsync()
    {
        if (EditorWebView == null)
            return null;

        try
        {
            var result = await EditorWebView.InvokeScriptAsync("eval", new[] { "window.getHtmlContent();" });
            return result;
        }
        catch
        {
            return null;
        }
    }

    /// <summary>
    /// Flushes the current editor content back into the bound <see cref="Document"/>.
    /// Call this before saving to ensure the Document model contains the latest HTML.
    /// </summary>
    public async Task FlushToDocumentAsync()
    {
        if (Document == null)
            return;

        var html = await GetHtmlAsync();
        if (html != null)
        {
            Document.Content = html;
            Document.MarkAsDirty();
        }
    }

    // Minimal embedded editor HTML using Quill from CDN. This is loaded with NavigateToString.
    // It exposes window.setHtmlContent(html) and window.getHtmlContent() for host interop.
    private const string EditorHtml = @"<!doctype html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta name='viewport' content='width=device-width, initial-scale=1'>
    <link href='https://cdn.quilljs.com/1.3.6/quill.snow.css' rel='stylesheet'>
    <style>html,body,#editor{height:100%;margin:0;padding:0;}#editor{box-sizing:border-box;padding:12px;}</style>
  </head>
  <body>
    <div id='editor'></div>
    <script src='https://cdn.quilljs.com/1.3.6/quill.min.js'></script>
    <script>
      var quill = new Quill('#editor', { theme: 'snow' });
      window.setHtmlContent = function(html) {
        try {
          quill.clipboard.dangerouslyPasteHTML(html || '');
        } catch (e) {
          quill.setText(html || '');
        }
      };
      window.getHtmlContent = function() {
        try { return quill.root.innerHTML; } catch (e) { return '' + quill.getText(); }
      };
    </script>
  </body>
</html>";
    }
}

