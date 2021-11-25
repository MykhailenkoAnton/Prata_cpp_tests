#include <iostream>
void menu();
int main()
{

    menu();
    char ch;
    std::cin >> ch;
    while ((ch != 'a' && ch != 'A') && (ch != 'b' && ch != 'B') && (ch != 'c' && ch != 'C') && (ch != 'd' && ch != 'D'))
    {
        std::cout << "enter please a b c d: ";
        std::cin >> ch;
    }
    switch (ch)
    {
    case 'a':
    case 'A': std::cout << "AAAAAAAAA!!!\n";
        break;
    case 'b':
    case 'B': std::cout << "BBBBBBBBBB!!!\n";
        break;
    case 'c':
    case 'C': std::cout << "CCCCCCCCCC!!!\n";
        break;
    case 'd':
    case 'D': std::cout << "CCCCCCCCCC!!!\n";
    default:
        break;
    }
    
    return 0;
}
void menu()
{
    std::cout << "Please, enter a u variant:\n";
    std::cout << "a: carmivore     b: pianist\n";
    std::cout << "c: random        d: expession\n";
}