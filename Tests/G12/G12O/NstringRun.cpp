#include <iostream>
#include "Nstring.h"

const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    Nstring name;
    std::cout << "Hi, what's your name?\n>> ";
    std::cin >> name; // ввод имени
    std::cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n"; // ввод поговорки
    Nstring sayings[ArSize]; // массив объектов
    char temp[MaxLen]; // временное хранилище для строки
    int i;
    for (i = 0; i < ArSize; i++)
    {
        std::cout << i + 1 << ": ";
        std::cin.get(temp, MaxLen);
        while (std::cin && std::cin.get() != '\n')
        {
            continue;
        }
        if (!std::cin || temp[0] == '\0') // пустая строка?
        {
            break;      // i не инкрементируется
        }
        else
        {
            sayings[i] = temp; // перегруженное присваивание
        }
    }
    int total = i; // общее количество прочитанных строк
    if (total > 0)
    {
        std::cout << "Here are your sayings:\n"; // вывод поговорок
        for (i = 0; i < total; i++)
        {
            std::cout << sayings[i][0] << ": " << sayings[i] << std::endl; // ???????????????
        }
        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].lenght() < sayings[shortest].lenght())
            {
                shortest = i;
            }
            if (sayings[i] < sayings[first])
            {
                first = i;
            }
            
        }
        std::cout << "Shortest saying:\n" << sayings[shortest] << std::endl; // Самая короткая поговорка
        std::cout << "First alphabetically:\n" << sayings[first] << std::endl; // Первая по алфавиту
        std::cout << "This program used " << Nstring::HowMany() << " Nstring objects. Bye.\n"; // Количество используемых объектов Nstring
    }
    else
    {
        std::cout << "No input! Bye.\n"; // ничего не было введено
    }
    return 0;
}