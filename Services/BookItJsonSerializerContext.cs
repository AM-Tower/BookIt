using System.Text.Json;
using System.Text.Json.Serialization;
using BookIt.Models;

namespace BookIt.Services;

/// <summary>
/// Source-generated JSON serializer context for BookIt models.
/// Provides trimming-safe, AOT-compatible serialization for Project, Document, and related types.
/// </summary>
[JsonSerializable(typeof(Project))]
[JsonSerializable(typeof(Document))]
[JsonSerializable(typeof(ProjectSettings))]
[JsonSerializable(typeof(List<string>))]
[JsonSourceGenerationOptions(
    WriteIndented = true,
    PropertyNameCaseInsensitive = true,
    DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull
)]
public partial class BookItJsonSerializerContext : JsonSerializerContext
{
}
