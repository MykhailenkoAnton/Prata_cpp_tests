#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    stack ST;
    char ch;
    customer CC;
    std::cout << "Plese enter Q to quit, A to add stack, B to leave of stack: ";
    while (std::cin >> ch && toupper(ch) != 'Q')
    {
        while (std::cin.get() != '\n')
        {
            continue;
        } 
        switch (ch)
        {
        case 'A':
        case 'a': std::cout << "Enter name: ";
                getline(std::cin, CC.name);
                std::cout << "Enter monet: ";
                std::cin >> CC.paymant;
                if (ST.isFull())
                {
                    std::cout << "Stack is full\n";
                }
                else
                {
                    ST.push(CC);
                    std::cout << "add: " << CC.name << ", " << CC.paymant << std::endl;
                }
            break;
        case 'B':
        case 'b':
                if (ST.isEmty())
                {
                    std::cout << "Stack is emty: ";
                }
                else
                {
                    ST.pop(CC);
                    std::cout << "popped " <<  CC.name << ", " << CC.paymant << "!\n";
                }
            break;
        }
        std::cout << "Plese enter Q to quit, A to add stack, B to leave of stack: ";
    }
    
}