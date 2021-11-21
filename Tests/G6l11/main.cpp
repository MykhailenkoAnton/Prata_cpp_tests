#include <iostream>
#include <cctype>
// toupper () если нижний - возвращает в верхнем
// isdigit ()  десятичная цифра
// tolower () если верхний регистр - возращает в нижнем
int main ()
{
    char ch;
    std::cin.get(ch);
    while (ch != '@')
    {
        if(!isdigit(ch))
        {
            if(ch >= 'A' && ch <= 'Z')
            {
                ch = tolower(ch);
                std::cout << ch;
            }
            else
            {
                ch = toupper(ch);
                std::cout << ch;
            }
        }
        else
        {
            while (ch == isdigit(ch))
            {
                continue;
            }
            
        }
        std::cin.get(ch);
    }
    
    return 0;
}