#include <iostream>
const int LIMIT = 255;

int main()
{
    char input[LIMIT];
    std::cout << "Enter a string for getline () processing:\n"; // запрос на ввод строки
    std::cin.getline(input, LIMIT, '#');
    std::cout << "Here is your input:\n";
    std::cout << input << "\nDone with phase 1\n";

    char ch;
    std::cin.get(ch);
    std::cout << "The next input character is " << ch << std::endl;

    if (ch != '\n')
    {
        std::cin.ignore(LIMIT, '\n'); // отбрасывание остальной части строки
    }
    
    std::cout << "Enter a string for get() processing:\n";
    std::cin.get(input, LIMIT, '#');
    std::cout << "Here is your input:\n";
    std::cout << input << "\nDone with phase 2\n";
    std::cin.get(ch);
    std::cout << "The next input character is " << ch << std::endl;

    return 0;
}