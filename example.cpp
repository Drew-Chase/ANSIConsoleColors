#include "color_codes.h"

int main()
{
    // Set the lines color to blue
    colors::ConsoleColors::SetForegroundColor(colors::ColorCodes::Blue);
    printf("This text is blue\n");
    colors::ConsoleColors::ResetConsoleColor();

    printf("This text is %sblue%s and this text is %sred%s\n",
           colors::ConsoleColors::GetColorCode(colors::ColorCodes::Blue).c_str(),
           colors::ConsoleColors::GetColorCode(colors::ColorCodes::Default).c_str(),
           colors::ConsoleColors::GetColorCode(colors::ColorCodes::Red).c_str(),
           colors::ConsoleColors::GetColorCode(colors::ColorCodes::Default).c_str());

    // rainbow text
    for (int i = 30; i <= 97; i++)
    {
        if (i > 37 && i < 90) i = 90;
        colors::ConsoleColors::SetForegroundColor(static_cast<colors::ColorCodes>(i));
        printf("This text is color code %d\n", i);
    }
    for (int i = 30; i <= 97; i++)
    {
        if (i > 37 && i < 90) i = 90;
        colors::ConsoleColors::SetBackgroundColor(static_cast<colors::ColorCodes>(i));
        printf("This text is color code %d\n", i);
    }

    colors::ConsoleColors::ResetConsoleColor();
#ifdef WIN32
    system("pause");
#endif

    return 0;
}
