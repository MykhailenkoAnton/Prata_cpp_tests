#include <iostream>
#include "worker.h"
// Методы Worker
// Виртуальный деструктор должен быть реализован, даже если он является чистым
Worker::~Worker() {}

void Worker::Set()
{
    std::cout << "Enter worker's name: "; // ввод имени и фамилии работчика
    getline(std::cin, fullname);
    std::cout << "Enter worker's ID: "; // ввод идентификатора работчика
    std::cin >> id;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Worker::Show() const
{
    std::cout << "Name: " << fullname << "\n"; // имя и фамилия
    std::cout << "Employee ID: " << id << "\n"; // идентификатор
}

// Методы Waiter
void Waiter::Set()
{
    Worker::Set();
    std::cout << "Enter waiter's panache rating: "; // Ввод индекса элегантности официанта
    std::cin >> panache;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Waiter::Show() const
{
    std::cout << "Category: waiter\n"; // категория: официант
    Worker::Show();
    std::cout << "Panache rating: " << panache << "\n"; // индекс элегантности
}

// Методы Singer

char * Singer::pv[] = {"other", "alto", "contralto",
"soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    Worker::Set();
    std::cout << "Enter number for singer's vocal range:\n"; // Ввод номера вокального диапазона певца
    int i;
    for (int i = 0; i < Vtypes; i++)
    {
        std::cout << i << ": " << pv[i] << " ";
        if (i % 4 == 3)
        {
            std::cout << std::endl;
        }
    }
    if (i % 4 != 0)
    {
        std::cout << std::endl;
    }
    while (std::cin >> voice && (voice < 0 || voice >= Vtypes))
    {
        std::cout << "Please enter a value >= 0 and < " << Vtypes << std::endl;
    }
    while (std::cin.get() != '\n')
    {
        continue;
    }
}

void Singer::Show() const
{
    std::cout << "Category: singer\n"; // категория: певец
    Worker::Show();
    std::cout << "Vocal range: " << pv[voice] << std::endl; // вокальный диапазон
}