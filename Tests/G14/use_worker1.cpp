#include <iostream>
#include <cstring>
#include "worker1.h"

const int SIZE = 5;

int main()
{
    Worker * lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        std::cout << "Enter the employee category:\n" // ввод категории работника;
                << "w: waiter s: singer " // w - официант, s - певец,
                << "t: singing waiter q: quit\n"; // t - поющий официант, q - завершение
        std::cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            std::cout << "Please enter a w, s, t, or q: ";
            std::cin >> choice;
        }
        if (choice == 'q')
        {
            break;
        }
        switch (choice)
        {
        case 'w': lolas[ct] = new Waiter;
            break;
        case 's': lolas[ct] = new Singer;
            break;
        case 't': lolas[ct] = new SingingWaiter;
            break;
        
        default:
            break;
        }
        std::cin.get();
        lolas[ct]->Set();
    }
    std::cout << "\nHere is your staff:\n"; // вывод списка работников
    int i;
    for (i = 0; i < ct; i++)
    {
        std::cout << std::endl;
        lolas[i]->Show();
    }
    for (i = 0; i < ct; i++)
    {
        delete lolas[i];
    }
    std::cout << "Bye.\n";
    return 0;
}