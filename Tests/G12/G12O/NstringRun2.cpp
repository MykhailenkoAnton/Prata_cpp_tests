#include <iostream>
#include <cstdlib> // (или stdlib.h) для rand(), srand()
#include <ctime> // (или time.h) для time()
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
        // Указатели для отслеживания кратчайшей и первой строки
        Nstring * shortest = &sayings[0]; // ицициализация первым объектом
        Nstring * first = &sayings[0]; // ицициализация первым объектом
        for (i = 1; i < total; i++)
        {
            if (sayings[i].lenght() < shortest->lenght())
            {
                shortest = &sayings[i]; // присваивание адреса
            }
            if (sayings[i] < *first) // сравнение значений
            {
                first = &sayings[i]; // присваивание адреса
            } 
        }
        std::cout << "Shortest saying: \n" << *shortest << std::endl; // вывод кратчайшей пословицы
        std::cout << "First alphabetically: \n" << *first << std::endl; // вывод первой пословицы по алфавиту
        srand(time(0));
        int choice = rand() % total; // выбор случайного индекса
        
        // Создание и инициализация объекта String с помощью new
        Nstring * favorite = new Nstring(sayings[choice]);
        std::cout << "My favorite saying: \n" << *favorite << std::endl; // вывод любимой пословицы
        delete favorite;
    }
    else
    {
        std::cout << "Not much to say, eh?\n"; // ничего не было введено
    }
    std::cout << "BYE!\n";
    return 0;
}