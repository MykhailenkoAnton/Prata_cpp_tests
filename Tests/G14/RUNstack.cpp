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
    while (std::cin >> ch && toupper(ch) != 'Q')
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
            case 'A':
            case 'a': std::cout << "Enter a PO number to add: ";
                        // Ввод номера добавляемого заказа
                        std::cin >> po;
                        if (st.is_full())
                        {
                            std::cout << "stack already full\n"; // стек уже полон
                        }
                        else
                        {
                            st.push(po);
                        }
                break;
            case 'P':
            case 'p': if (st.is_empty())
            {
                std::cout << "stack already empty\n"; // стек уже пуст
            }
            else
            {
                st.pop(po);
                std::cout << "PO #" << po << " popped\n"; // заказ извлечен
                break;
            }
        }
        std::cout << "Please enter A to add a purchase order, \n"
                    << "P to process a PO, or Q to quit.\n";
    }
    std::cout << "Bye\n";
    return 0;
}
