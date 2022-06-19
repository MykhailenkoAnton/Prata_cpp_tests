#include <iostream>
#include <string>
#include <cctype>
#include "stack.h"

int main()
{
    Stack<std::string> st; // создание пустого стека
    char ch;
    std::string po;
    std::cout << "Please enter A to add a purchase order,\n" // A - добавить заказ,
                << "P to process a PO, or Q to quit.\n"; // P - обработать заказ, Q - выйти
    while (std::cin >> ch && std::toupper(ch) != 'Q')
    {
        while (std::cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            std::cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'a':
        case 'A':
                std::cout << "Enter a PO number to add: ";
                        // Ввод номера добавляемого заказа
                std::cin >> po;
                if (st.is_full())
                {
                    std::cout << "stack already full\n";
                }
                else
                {
                    st.push(po);
                }
            break;
        case 'p':
        case 'P':
                if (st.is_empty())
                {
                    std::cout << "stack already empty\n";
                }
                else
                {
                    st.pop(po);
                    std::cout << "PO #" << po << " popped\n";
                    break;
                }
        default:
            break;
        }
        std::cout << "Please enter A to add a purchase order, \n"
                    << "P to process a PO, or Q to quit.\n";
    }
    std::cout << "Bye\n";
    return 0;
}