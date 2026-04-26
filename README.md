# Project README

## Overview
This project is a C-based application designed to read and play audio files. It includes support for various operating systems, including Linux, Windows, Wine, and WebAssembly.

## Features
- Reading of WAV audio files.
- Playback of WAV audio files.
- Support for multiple platforms: Linux, Windows, Wine, and WebAssembly.

## Project Structure
```
/home/codeleaded/Hecke/C/Cmd_Audio/
├── build/              # Compiled .exe files produced by Main.c
├── src/                # Source code
│   ├── Main.c          # Entry point
│   └── *.h             # Header files used by Main.c
├── Makefile.linux      # Linux Build configuration
├── Makefile.windows    # Windows Build configuration
├── Makefile.wine       # Wine Build configuration for cross-compiling to Windows
├── Makefile.web        # Emscripten Build configuration for WebAssembly
└── README.md           # This file
```

### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
To build and run the project, follow these steps:

1. Navigate to the project directory:
    ```sh
    cd /home/codeleaded/Hecke/C/Cmd_Audio/
    ```

2. Build for Linux (Ubuntu):
    ```sh
    make -f Makefile.linux all
    ```

3. Build for Windows:
    ```sh
    make -f Makefile.windows all
    ```

4. Build for Wine (Linux cross-compiling to Windows):
    ```sh
    make -f Makefile.wine all
    ```

5. Build for WebAssembly:
    ```sh
    make -f Makefile.web all
    ```

6. Run the executable:
    ```sh
    make -f Makefile.(os) exe
    ```

7. Clean the build artifacts:
    ```sh
    make -f Makefile.(os) clean
    ```

Replace `(os)` with the appropriate OS specific makefile target (linux, windows, wine, web).