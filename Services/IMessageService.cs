namespace BookIt.Services;

/// <summary>
/// Interface for message queue and notification service.
/// </summary>
/// <remarks>
/// Manages a queue of status messages and notifications displayed to the user.
/// Categorizes messages by type (Error, Warning, Info, Success).
/// </remarks>
public interface IMessageService
{
    /// <summary>
    /// Enqueues a message to be displayed.
    /// </summary>
    /// <param name="message">The message text (supports markdown).</param>
    /// <param name="type">The message type (Error, Warning, Info, Success).</param>
    /// <param name="durationSeconds">How long to display the message (0 = no timeout).</param>
    void EnqueueMessage(string message, MessageType type, int durationSeconds = 5);

    /// <summary>
    /// Dequeues the next message from the queue.
    /// </summary>
    /// <returns>The next Message or null if queue is empty.</returns>
    Message? DequeueMessage();

    /// <summary>
    /// Clears all messages from the queue.
    /// </summary>
    void ClearQueue();

    /// <summary>
    /// Gets the current message count in the queue.
    /// </summary>
    int MessageCount { get; }

    /// <summary>
    /// Occurs when a new message is added to the queue.
    /// </summary>
    event EventHandler<MessageEventArgs>? MessageAdded;

    /// <summary>
    /// Occurs when a message is removed from the queue.
    /// </summary>
    event EventHandler<MessageEventArgs>? MessageRemoved;
}

/// <summary>
/// Enumeration of message types with associated colors.
/// </summary>
public enum MessageType
{
    /// <summary>Error message (red).</summary>
    Error,

    /// <summary>Warning message (orange/magenta).</summary>
    Warning,

    /// <summary>Info message (theme color).</summary>
    Info,

    /// <summary>Success message (green).</summary>
    Success
}

/// <summary>
/// Represents a single message in the queue.
/// </summary>
public class Message
{
    /// <summary>
    /// Gets or sets the message text.
    /// </summary>
    public string Text { get; set; } = string.Empty;

    /// <summary>
    /// Gets or sets the message type.
    /// </summary>
    public MessageType Type { get; set; }

    /// <summary>
    /// Gets or sets the timestamp when the message was created.
    /// </summary>
    public DateTime CreatedAt { get; set; } = DateTime.UtcNow;

    /// <summary>
    /// Gets or sets the timeout duration in seconds (0 = no timeout).
    /// </summary>
    public int DurationSeconds { get; set; }

    /// <summary>
    /// Gets or sets a unique message identifier.
    /// </summary>
    public string Id { get; set; } = Guid.NewGuid().ToString();

    /// <summary>
    /// Gets whether this message has expired based on its duration.
    /// </summary>
    public bool HasExpired
    {
        get
        {
            if (DurationSeconds <= 0)
                return false;
            return DateTime.UtcNow.Subtract(CreatedAt).TotalSeconds > DurationSeconds;
        }
    }
}

/// <summary>
/// Event arguments for message service events.
/// </summary>
public class MessageEventArgs : EventArgs
{
    public Message? Message { get; set; }
}
