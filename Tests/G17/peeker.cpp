#include <iostream>
int main()
{
    // Считывание и отображение символов до символа #
    char ch;

    while (std::cin.get(ch)) // завершение по достижении EOF
    {
        if (ch != '#')
        {
            std::cout << ch;
        }
        else
        {
            std::cin.putback(ch);
            break;
        }
    }
    if (!std::cin.eof())
    {
        std::cin.get(ch);
        std::cout << std::endl << ch << " is next input character.\n";
    }
    else
    {
        std::cout << "End of file reached. \n"; // достигнут конец файла
        std::exit(0);
    }
    while (std::cin.peek() != '#') // "заглядывание" вперед
    {
        std::cin.get(ch);
        std::cout << ch;
    }

    if (!std::cin.eof())
    {
        std::cin.get(ch);
        std::cout << std::endl << ch << " is next input character.\n";
    }
    else
    {
        std::cout << "End of file reached. \n"; // достигнут конец файла
    }
        
    return 0;
}