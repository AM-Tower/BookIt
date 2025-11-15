namespace BookIt.ViewModels;

using System.Collections.ObjectModel;
using BookIt.Services;

/// <summary>
/// ViewModel for the message panel (bottom status area).
/// </summary>
/// <remarks>
/// Displays messages, notifications, and status information.
/// </remarks>
public class MessagePanelViewModel
{
    private Message? _currentMessage;

    /// <summary>
    /// Gets or sets the current message being displayed.
    /// </summary>
    public Message? CurrentMessage
    {
        get => _currentMessage;
        set
        {
            _currentMessage = value;
            OnPropertyChanged(nameof(CurrentMessage));
        }
    }

    /// <summary>
    /// Gets the queue of pending messages.
    /// </summary>
    public ObservableCollection<Message> MessageQueue { get; } = new();

    /// <summary>
    /// Gets or sets the number of messages in the queue.
    /// </summary>
    public int QueuedMessageCount { get; set; }

    /// <summary>
    /// Adds a message to display.
    /// </summary>
    /// <param name="text">Message text.</param>
    /// <param name="type">Message type (Error, Warning, Info, Success).</param>
    /// <param name="durationSeconds">How long to display the message.</param>
    public void AddMessage(string text, MessageType type, int durationSeconds = 5)
    {
        var message = new Message
        {
            Text = text,
            Type = type,
            DurationSeconds = durationSeconds
        };

        MessageQueue.Add(message);
        QueuedMessageCount = MessageQueue.Count;

        if (CurrentMessage == null)
        {
            CurrentMessage = message;
        }
    }

    /// <summary>
    /// Clears the current message and shows the next one from the queue.
    /// </summary>
    public void ShowNextMessage()
    {
        if (MessageQueue.Count > 0)
        {
            MessageQueue.RemoveAt(0);
            CurrentMessage = MessageQueue.Count > 0 ? MessageQueue[0] : null;
            QueuedMessageCount = MessageQueue.Count;
        }
        else
        {
            CurrentMessage = null;
        }
    }

    /// <summary>
    /// Clears all messages.
    /// </summary>
    public void ClearMessages()
    {
        MessageQueue.Clear();
        CurrentMessage = null;
        QueuedMessageCount = 0;
    }

    /// <summary>
    /// Occurs when a property changes.
    /// </summary>
    public event PropertyChangedEventHandler? PropertyChanged;

    /// <summary>
    /// Raises PropertyChanged event.
    /// </summary>
    protected void OnPropertyChanged(string propertyName)
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }
}
