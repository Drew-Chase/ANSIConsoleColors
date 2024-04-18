# ANSIConsoleColors

This is a simple library for C++11 or newer that allows you to use ANSI escape codes to colorize your console output.

## Usage

To use this library, simply include the header file in your project. View the [example](example.cpp) for a demonstration of how to use the library.

```c++
#include "ANSIConsoleColors.h"
```

### Set the color of the entire line

```c++
colors::ConsoleColors::SetForegroundColor(colors::ColorCodes::Blue);
printf("This text is blue\n");
colors::ConsoleColors::ResetConsoleColor();
```

### Set the color of a specific word

```c++
 printf("This text is %sblue%s\n",
         colors::ConsoleColors::GetColorCode(colors::ColorCodes::Blue).c_str(),
         colors::ConsoleColors::GetColorCode(colors::ColorCodes::Default).c_str());
```

## Colors

| Color        | Code                               | Preview                                                              |
|--------------|------------------------------------|----------------------------------------------------------------------|
| Black        | `colors::ColorCodes::Black`        | ![Black](https://via.placeholder.com/15/000000/000000?text=+)        |
| Default      | `colors::ColorCodes::Default`      | ![Default](https://via.placeholder.com/15/FFFFFF/FFFFFF?text=+)      |
| Red          | `colors::ColorCodes::Red`          | ![Red](https://via.placeholder.com/15/FF0000/FF0000?text=+)          |
| Green        | `colors::ColorCodes::Green`        | ![Green](https://via.placeholder.com/15/008000/008000?text=+)        |
| Yellow       | `colors::ColorCodes::Yellow`       | ![Yellow](https://via.placeholder.com/15/FFFF00/FFFF00?text=+)       |
| Blue         | `colors::ColorCodes::Blue`         | ![Blue](https://via.placeholder.com/15/0000FF/0000FF?text=+)         |
| Magenta      | `colors::ColorCodes::Magenta`      | ![Magenta](https://via.placeholder.com/15/FF00FF/FF00FF?text=+)      |
| Cyan         | `colors::ColorCodes::Cyan`         | ![Cyan](https://via.placeholder.com/15/00FFFF/00FFFF?text=+)         |
| LightGray    | `colors::ColorCodes::LightGray`    | ![LightGray](https://via.placeholder.com/15/D3D3D3/D3D3D3?text=+)    |
| DarkGray     | `colors::ColorCodes::DarkGray`     | ![DarkGray](https://via.placeholder.com/15/A9A9A9/A9A9A9?text=+)     |
| LightRed     | `colors::ColorCodes::LightRed`     | ![LightRed](https://via.placeholder.com/15/FFB6C1/FFB6C1?text=+)     |
| LightGreen   | `colors::ColorCodes::LightGreen`   | ![LightGreen](https://via.placeholder.com/15/90EE90/90EE90?text=+)   |
| LightYellow  | `colors::ColorCodes::LightYellow`  | ![LightYellow](https://via.placeholder.com/15/FFFFE0/FFFFE0?text=+)  |
| LightBlue    | `colors::ColorCodes::LightBlue`    | ![LightBlue](https://via.placeholder.com/15/ADD8E6/ADD8E6?text=+)    |
| LightMagenta | `colors::ColorCodes::LightMagenta` | ![LightMagenta](https://via.placeholder.com/15/FF80FF/FF80FF?text=+) | 
| LightCyan    | `colors::ColorCodes::LightCyan`    | ![LightCyan](https://via.placeholder.com/15/E0FFFF/E0FFFF?text=+)    |
| White        | `colors::ColorCodes::White`        | ![White](https://via.placeholder.com/15/FFFFFF/FFFFFF?text=+)        |
