#include <iostream>
#include <cstring>
#include "head.h"
const int SIZE = 5;
int main()
{
    Person * PR[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        std::cout << "Enter the employee category:\n" // ввод категории работника;
                << "g: Gunslinger p: PokerPlayer " // w - официант, s - певец,
                << "b: BadDude waiter q: quit\n"; // t - поющий официант, q - завершение
        std::cin >> choice;
        while (strchr("gpbq", choice) == NULL)
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
        case 'g':
            PR[ct] = new Gunslinger;
            break;
        case 'p':
            PR[ct] = new PokerPlayer;
            break;
        case 'b':
            PR[ct] = new BadDude;
            break;

        default:
            break;
        }
        std::cin.get();
        PR[ct]->Set();
    }
    std::cout << "\nHere is guys:\n"; // вывод списка
    int i;
    for (i = 0; i < ct; i++)
    {
        std::cout << std::endl;
        PR[i]->Show();
    }
    for (i = 0; i < ct; i++)
    {
        delete PR[i];
    }
    std::cout << "Bye.\n";
    return 0;
}