// #include <iostream>
// #include "worker.h"
// // Методы Worker
// // Виртуальный деструктор должен быть реализован, даже если он является чистым
// Worker::~Worker() 
// {
// }
// void Worker::Set() 
// {
//     std::cout << "Enter worker's name: "; // ввод имени и фамилии работчика
//     getline(std::cin, fullname);
//     std::cout << "Enter worker's ID: "; // ввод идентификатора работчика
//     std::cin >> id;
//     while (std::cin.get() != '\n')
//     {
//         continue;
//     }
// }
// void Worker::Show() const
// {
//     std::cout << "Name: " << fullname << std::endl; // имя и фамилия
//     std::cout << "Employee ID: " << id << std::endl;  // идентификатор
// }
// // Методы Waiter
// void Waiter::Set()
// {
//     Worker::Set();
//     std::cout << "Enter waiter's panache rating: ";
//                 // Ввод индекса элегантности официанта
//     std::cin >> panache;
//     while (std::cin.get() != '\n')
//     {
//         continue;
//     }   
// }
// void Waiter::Show() const
// {
//     std::cout << "Category: waiter\n";
//     Worker::Show();
//     std::cout << "Panache rating: " << panache << std::endl; // индекс элегантности
// }
// // Методы Singer
// char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

// void Singer::Set()
// {
//     Worker::Set();
//     std::cout << "Enter number for singer's vocal range:\n";
//                     // Ввод номера вокального диапазона певца
//     int i;
//     for (i = 0; i < Vtypes; i++)
//     {
//         std::cout << i << ": " << pv[i] << " ";
//         if (i % 4 == 3)
//         {
//             std::cout << std::endl;
//         }
//     }
//     if (i % 4 != 0)
//     {
//         std::cout << std::endl;
//     }
//     while (std::cin >> voice && (voice < 0 || voice >= Vtypes))
//     {
//         std::cout << "Please enter a value >= 0 and < " << Vtypes << std::endl;
//     }
//     while (std::cin.get() != '\n')
//     {
//         continue;
//     }  
// }
// void Singer::Show() const
// {
//     std::cout << "Category: singer\n"; // категория: певец
//     Worker::Show();
//     std::cout << "Vocal range: " << pv[voice] << std::endl; // вокальный диапазон
// }

#include <iostream>
#include "worker.h"

// Методы Worker
Worker::~Worker() 
{
}
// Защищенные методы
void Worker::Data() const
{
    std::cout << "Name: " << fullname << std::endl; // имя и фамилия
    std::cout << "Employee ID: " << id << std::endl;  // идентификатор
}
void Worker::Get()
{
    getline(std::cin, fullname);
    std::cout << "Enter worker's ID: "; // ввод идентификатора работчика
    std::cin >> id;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}
// Методы Waiter
void Waiter::Set()
{
    std::cout << "Enter waiter's name: "; // ввод имени и фамилии работчика
    Worker::Get();
    Get();
}
void Waiter::Show() const
{
    std::cout << "Category: waiter\n"; // категория: официант
    Worker::Data();
    Data();
}
// Защищенные методы
void Waiter::Data() const
{
    std::cout << "Panache rating: " << panache << std::endl; // индекс элегантности
}
void Waiter::Get()
{
    std::cout << "Enter waiter's panache rating: ";
                    // Ввод индекса элегантности официанта
    std::cin >> panache;
    while (std::cin.get() != '\n')
    {
        continue;
    }
}
// Методы Singer

char * Singer::pv[] = {"other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    std::cout << "Enter singer's name: "; // Ввод имени и фамилии певца
    Worker::Get();
    Get();
}
void Singer::Show() const
{
    std::cout << "Category: singer\n"; // Категория: певец
    Worker::Data();
    Data();
}
// Защищенные методы
void Singer::Data() const
{
    std::cout << "Vocal range: " << pv[voice] << std::endl; // Вокальный диапазон
}
void Singer::Get()
{
    std::cout << "Enter number for singer's vocal range:\n";
                    // Ввод номера вокального диапазона певца
    int i;
    for (i = 0; i < Vtypes; i++)
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
        std::cout << "Enter number for singer's vocal range:\n" << Vtypes << std::endl;
    }
    while (std::cin.get() != '\n')
    {
        continue;
    }  
}
// Методы SingingWaiter
void SingingWaiter::Data() const
{
    Singer::Data();
    Waiter::Data();
}
void SingingWaiter::Get()
{
    Waiter::Get();
    Singer::Get();
}
void SingingWaiter::Set()
{
    std::cout << "Enter singing waiter's name: ";
                // Ввод имени и фамилии поющего официанта
    Worker::Get();
    Get();
}
void SingingWaiter::Show() const
{
    std::cout << "Category: singing waiter\n"; // категория: поющий официант
    Worker::Data();
    Data();
}