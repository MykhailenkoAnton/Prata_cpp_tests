#include <iostream>
void menu();
int main()
{

    menu();
    char ch;
    bool end = false;
    while (!end)
    {
        std::cin >> ch;
            switch (ch)
        {
        case 'a':
        case 'A': 
            std::cout << "AAAAAAAAA!!!\n";
            end = true;
            break;
        case 'b':
        case 'B':
            std::cout << "BBBBBBBBBB!!!\n";
            end = true;
            break;
        case 'c':
        case 'C':
            std::cout << "CCCCCCCCCC!!!\n";
            break;
            end = true;
        case 'd':
        case 'D':
            std::cout << "CCCCCCCCCC!!!\n";
            break;
        default:
            std::cout << "enter please a b c d: ";
            end = true;
            break;
        }
    }
    
    
    return 0;
}
void menu()
{
    std::cout << "Please, enter a u variant:\n";
    std::cout << "a: carmivore     b: pianist\n";
    std::cout << "c: random        d: expession\n";
}