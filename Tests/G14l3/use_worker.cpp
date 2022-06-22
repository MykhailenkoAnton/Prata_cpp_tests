#include <iostream>
#include <cstring>
#include "Worker.h"
#include "Que.h"
const int SIZE = 5;

int main()
{
    std::cout << "Enter max Queue size: ";
    int size_q;
    std::cin >> size_q;

    QueueTP<Worker *> QW(size_q);

    Worker * lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        if (QW.is_full())
        {
            break;
        }
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

        if (!QW.is_full())
        {
            QW.enqueue(lolas[ct]);
            std::cout << lolas[ct] << " go to Queue!\n";
            std::cout << QW.quecount() << " elements in QUEUE\n";
        }
    }
    for (int i = 0; i < ct; i++)
    {
        std::cout << "\n<<<<<<<<<<<PROP FROM QUEUE>>>>>>>>>>>>>>>\n";
        lolas[i]->Show();
    }
    
}
