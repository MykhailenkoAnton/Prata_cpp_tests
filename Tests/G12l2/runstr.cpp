#include <iostream>
#include <cstring>
#include "string2.h"

int main()
{
    NString s1(" and I am a C++ student.");
    NString s2 = "Please enter your name: "; // ввод имени
    NString s3;
    std::cout << s2; // перегруженная операция <<
    std::cin >> s3; // перегруженная операция >>
    s2 = "My name is " + s3; // перегруженные операции =, +
    std::cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.stringup(); // преобразование строки в верхний регистр
    std::cout << "The string\n" << s2 << "\ncontains " << s2.has('A') << " 'A' characters in it.\n";
    s1 = "red"; // String(const char *) 
                // тогда String & operator= (const Strings)
    NString rgb[3] = {NString (s1), NString("green"), NString("blue")};
    std::cout << "Enter the name of a primary color for mixing light: " ; // ввод цвета
    NString ans;
    bool success = false;
    while (std::cin >> ans)
    {
        ans.stringlow(); // преобразование строки в нижний регистр
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])
            {
                std::cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if (success)
        {
            break;
        }
        else
        {
            std::cout << "Try again!\n";
        }
        
    }
    std::cout << "bye!\n";
    return 0;
}
