# ANSIConsoleColors

This is a simple library for C++11 or newer that allows you to use ANSI escape codes to colorize your console output.

## Usage

To use this library, simply include the header file in your project.

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