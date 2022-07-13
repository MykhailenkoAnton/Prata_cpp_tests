#include <iostream>
const int SLEN = 10;
inline void eatline() {while (std::cin.get() != '\n') continue;}

int main()
{
    char name[SLEN];
    char title[SLEN];
    std::cout << "Enter your name: "; // приглашение для ввода имени
    std::cin.get(name, SLEN);
    if (std::cin.peek() != '\n')
    {
        std::cout << "Sorry, we only have enough room for "
                        << name << std::endl; // вывод сообщения о недостатке места
    }
    eatline();
    std::cout << "Dear " << name << ", enter your title: \n"; //приглашение для ввода должности
    std::cin.get(title, SLEN);
    if (std::cin.peek() != '\n')
    {
        std::cout << "We were forced to truncate your title.\n";
                    // вынужденное усечение названия должности
    }
    eatline();
    std::cout << " Name: " << name
            << "\nTitle: " << title << std::endl;
    return 0;
}