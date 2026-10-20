# Analysis(/Design) Algorithm

This repository contains small algorithm implementations and tests for analysis and design of algorithms.

## Project structure

- `src/` contains the algorithm implementation
- `tests/` contains the test executable
- `CMakeLists.txt` configures the build

## Build

```bash
cmake -S . -B build
cmake --build build
```

## Run tests

```bash
ctest --test-dir build --output-on-failure
```

