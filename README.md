# Getting Started

Welcome to the Uno Platform!

To discover how to get started with your new app: https://aka.platform.uno/get-started

For more information on how to use the Uno.Sdk or upgrade Uno Platform packages in your solution: https://aka.platform.uno/using-uno-sdk

## Development notes

- Copy `.env.example` to `.env` for local secret values. `.env` is ignored by git.
- Git hooks are enabled locally via `core.hooksPath` and will run `dotnet format` and a build before push; install `dotnet-format` for the format hook to enforce style:

```powershell
dotnet tool install -g dotnet-format
```

## Testing

### Unit Tests
Run unit tests locally:
```powershell
dotnet test BookIt.Tests/BookIt.Tests.csproj
```

Tests are stored in `BookIt.Tests/` and run automatically on every push and PR via GitHub Actions. Add new test files in the test project following xUnit patterns.

### UI/Integration Tests
For UI testing in Uno Platform, consider:
- **Uno.UITests**: Automated UI testing framework (setup guides: https://aka.platform.uno/ui-tests)
- Manual testing on each platform target (Desktop, Android, iOS, WebAssembly)

## Security

- Do not commit secrets or credentials. Use GitHub Secrets for CI values and `.env`/local secrets for development.
- To report a vulnerability, see `.github/SECURITY.md`.
