#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;

int main()
{
    NString name;
    std::cout << "Hy, whats is u name?\n>> "; // ввод имени
    std::cin >> name;
    std::cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n"; // ввод поговорки
    NString sayings[ArSize]; // массив объектов
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
        if (!std::cin || temp[0] == '\0')
        {
            break;
        }
        else
        {
            sayings[i] = temp;
        }
    }
    int total = i;
    if (total > 0)
    {
        std::cout << "Here are your sayings:\n"; // вывод поговорок
        for (i = 0; i < total; i++)
        {
            std::cout << sayings[i][0] << ": " << sayings[i] << std::endl;
        }
        // Указатели для отслеживания кратчайшей и первой строки
        NString * shortest = &sayings[0]; // ицициализация первым объектом
        NString * first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].lenght() < shortest->lenght())
            {
                shortest = &sayings[i];
            }
            if (sayings[i] < *first) // сравнение значений
            {
                first = &sayings[i]; // присваивание адреса
            }
        }
        std::cout << "Shortest saying: \n" << *shortest << std::endl; // вывод кратчайшей пословицы
        std::cout << "First alphabetically: \n" << *first << std::endl; // вывод первой пословицы по алфавиту
        srand(time(0));
        int choice = rand() %  total; // выбор случайного индекса

        // Создание и инициализация объекта String с помощью new
        NString * favourite = new NString(sayings[choice]);
        std::cout << "My favorite saying: \n" << *favourite << std::endl; // вывод любимой пословицы
        delete favourite;
    }
    else
    {
        std::cout << "Not much to say, eh?\n"; // ничего не было введено
    }
    std::cout << "Bye . \n";
    
    return 0;
}