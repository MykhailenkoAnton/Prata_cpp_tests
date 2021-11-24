#include <iostream>
void menu();
const int strsize = 25;
struct BOP
{
    char fullname[strsize]; // реальное имя
    char title[strsize]; // должность
    char bopname[strsize]; // секретное имя БОП
    int preference;
};
int main()
{
    menu();
    BOP bp[3] = 
    {
        {"Anton", "Kuga", "Row", 0},
        {"Bogdan", "Bechoh", "llye", 1},
        {"Fahra", "Buitr", "Strow", 2}
    };
    char ch;
    std::cin >> ch;
    while (ch != 'q' && ch != 'Q')
    {
        switch (ch)
        {
        case 'a':
        case 'A':
                 std::cout << bp[0].fullname << std::endl;
                std::cout << bp[1].fullname << std::endl;
                std::cout << bp[2].fullname << std::endl; // цикл
            break;
        case 'b':
        case 'B':
                 std::cout << bp[0].title << std::endl;
                std::cout << bp[1].title << std::endl;
                std::cout << bp[2].title << std::endl; // цикл
            break;
            case 'c':
            case 'C':
                 std::cout << bp[0].bopname << std::endl; // цикл, потому что массив может быть n елементов
                std::cout << bp[1].bopname << std::endl;
                std::cout << bp[2].bopname << std::endl;
                break;
        case 'd':
        case 'D': for (int i = 0; i < 3; i++)
        {
            if (bp[i].preference == 0)
            {
                std::cout << bp[i].fullname << std::endl;
            }
            else if (bp[i].preference == 1)
            {
                std::cout << bp[i].title << std::endl;
            }
            else
            {
                std::cout << bp[i].bopname << std::endl;
            }
        }
                break;
                
        default:
            break;
        }
        std::cin >> ch;
    }
    
    return 0;
}
void menu()
{
    std::cout << "a. display by name     b. display by title\n"
                "c. display by bopname   d. display by preference\n"
                "q. quit\n";
}