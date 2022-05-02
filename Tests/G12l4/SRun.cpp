#include <iostream>
#include <cctype>
#include "Stock.h"

// int main()
// {
    // Stack st;
    // char ch;
    // unsigned long po;

    // // A - добавление заказа, Р - обработка заказа, Q - завершение
    // std::cout << "Please enter A to add a purchase order, \n"
    //         << "P to process a PO, or Q to quit.\n";
    // while (std::cin >> ch && toupper(ch) != 'Q')
    // {
    //     while (std::cin.get() != '\n')
    //     {
    //         continue;
    //     }
    //     if (!isalpha(ch))
    //     {
    //         std::cout << '\a' << "\"AAAA\"";
    //         continue;
    //     }
    //     switch (ch)
    //     {
    //     case 'A':
    //     case 'a':
    //         std::cout << "Enter a PO number to add: "; // запрос номера заказа
    //         std::cin >> po;
    //         if (st.is_full())
    //         {
    //             std::cout << "stack already full\n"; // стек уже полон
    //         }
    //         else
    //         {
    //             st.push(po);
    //         }
    //         break;
    //     case 'P':
    //     case 'p':
    //         if (st.is_empty())
    //         {
    //             std::cout << "stack already empty\n"; // стек уже пуст
    //         }
    //         else
    //         {
    //             st.pop(po);
    //             std::cout << "PO #" << po << " popped\n"; // заказ вытолкнут
    //         }
    //         break;
    //     }
    //     std::cout << "Please enter A to add a purchase order, \n"
    //         << "P to process a PO, or Q to quit.\n";
    // }
    // std::cout << "Bye!\n";
    // return 0;
// }

int main()
{
    unsigned long po;
    Stack st(5);
    int i = 0;
    while (i < 5)
    {
        std::cout << "Enter a PO number to add: "; // запрос номера заказ
        std::cin >> po;
        i++;
        if (st.is_full())
        {
            std::cout << "stack already full\n"; // стек уже полон
        }
        else
        {
            st.push(po);
        }
    }
    // Stack st2(st);
    Stack st1 = st;
  
    while (true)
    {
        st1.pop(po);
        std::cout << "PO #" << po << " popped\n"; // заказ вытолкнут
        if (st1.is_empty())
        {
            std::cout << "stack already empty\n"; // стек уже пуст
            break;
        }
    }
    return 0;
}