# Custom-CPP-Shell

## Project Structure

```text
Custom-CPP-Shell/
├── src/
│   ├── main.cpp
│   ├── shell.cpp
│   ├── parser.cpp
│   ├── executor.cpp
│   ├── builtins.cpp
│   ├── history.cpp
│   ├── redirection.cpp
│   ├── pipes.cpp
│   └── signals.cpp
│
├── include/
│   ├── shell.hpp
│   ├── parser.hpp
│   ├── executor.hpp
│   ├── builtins.hpp
│   ├── history.hpp
│   ├── redirection.hpp
│   ├── pipes.hpp
│   └── signals.hpp
│
├── tests/
│   ├── test_parser.cpp
│   ├── test_builtins.cpp
│   ├── test_executor.cpp
│   ├── test_pipes.cpp
│   └── test_redirection.cpp
│
├── docs/
│   ├── architecture.md
│   ├── commands.md
│   └── development.md
│
├── examples/
│   └── example_commands.sh
│
├── .github/
│   └── workflows/
│       └── ci.yml
│
├── CMakeLists.txt
├── README.md
├── LICENSE
└── .gitignore
```
