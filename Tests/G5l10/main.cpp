#include <iostream>

int main()
{
    std::cout << "Enter please how stings: ";
    int str_h;
    std::cin >> str_h;
    int str_hh = str_h;
    for (int i = 0; i < str_h; i++)
    {
        for (int j = 0; j < str_hh - 1; j++)
        {
            std::cout << '.';
        }
        for (int j = 0; j <= i; j++)
        {
            std::cout << '*';
        }
        str_hh--;
        std::cout<< std::endl;
    }
    return 0;
    
}