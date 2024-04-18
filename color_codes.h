#pragma once
#include <cstdio>
#include <string>
#ifndef COLOR_CODES_H
#define COLOR_CODES_H

namespace colors
{
    enum class ColorCodes
    {
        Default = 0,
        Black = 30,
        Red = 31,
        Green = 32,
        Yellow = 33,
        Blue = 34,
        Magenta = 35,
        Cyan = 36,
        LightGray = 37,
        DarkGray = 90,
        LightRed = 91,
        LightGreen = 92,
        LightYellow = 93,
        LightBlue = 94,
        LightMagenta = 95,
        LightCyan = 96,
        White = 97
    };

    class ConsoleColors
    {
    public:
        /**
         * @brief Retrieves the color escape code for the given ConsoleColorCodes.
         *
         * This function returns the ANSI escape sequence corresponding to the specified ConsoleColorCodes.
         * The escape sequence can be used to change the text color in the console.
         *
         * @param color The ConsoleColorCodes value for which to retrieve the color code.
         * @return The ANSI escape sequence for the specified ConsoleColorCodes.
         */
        static std::string GetColorCode(ColorCodes color)
        {
            return "\033[0;" + std::to_string(static_cast<int>(color)) + "m";
        }

        /**
         * @brief Set the console color to the specified color code.
         *
         * This function sets the console color to the specified `ConsoleColorCodes`.
         * It uses the `GetColorCode` function to retrieve the color code string
         * corresponding to the provided color enum value. The retrieved color code
         * is then printed to the console using the `printf` function.
         *
         * @param color The color code to set the console color to.
         */
        static void SetForegroundColor(const ColorCodes color)
        {
            printf("%s", GetColorCode(color).c_str());
        }

        static void SetBackgroundColor(const ColorCodes color)
        {
            printf("\033[0;%dm", static_cast<int>(color) + 10);
        }


        /**
         * @brief Resets the console color to the default color.
         *
         * This function prints the color code for the default console color, obtained from the ConsoleColorCodes enumeration,
         * to the console, resetting the current console color to the default color.
         *
         * @note Before calling this function, the ConsoleColorCodes enumeration and the GetColorCode() function must be defined.
         * The GetColorCode() function should return the color code string based on the given ConsoleColorCodes enum value.
         *
         * @see GetColorCode(), ConsoleColorCodes
         */
        static void ResetConsoleColor()
        {
            SetForegroundColor(ColorCodes::Default);
            SetBackgroundColor(ColorCodes::Default);
        }
    };
}

#endif
