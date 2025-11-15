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

## Security

- Do not commit secrets or credentials. Use GitHub Secrets for CI values and `.env`/local secrets for development.
- To report a vulnerability, see `.github/SECURITY.md`.
