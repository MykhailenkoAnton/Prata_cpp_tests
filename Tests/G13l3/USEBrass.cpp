#include <iostream>
#include "gl13.h"

const int MAX = 3;
int main()
{
    baseALL * ALL[MAX];
    char * l_name;
    int rat;
    char kind;
    for (int i = 0; i < MAX; i++)
    {
        std::cout << "Enter labels: ";
        std::cin.ignore();
        std::cin.getline(l_name, 50);
        std::cout << "Enter rating: ";
        std::cin >> rat;
        std::cout << "Enter 1 for baseDMA "
        << "2 for luckDMA, 3 for hasDMA: ";
        while (std::cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
        {
             std::cout << "Enter either 1, 2 or 3: ";
        }
        if (kind == '1')
        {
            ALL[i] = new baseDMA(l_name, rat);
        }
        else if (kind == '2')
        {
            char color_name[50];
            std::cout << "Enter color: ";
            std::cin.ignore();
            std::cin.getline(color_name, 50);
            ALL[i] = new luckDMA(color_name, l_name, rat);
        }
        else
        {
            char style_n[50];
            std::cout << "Enter style: ";
            std::cin.ignore();
            std::cin.getline(style_n, 50);
            ALL[i] = new hasDMA(style_n, l_name, rat);
        }
        
    }
    std::cout << std::endl;
    for (int i = 0; i < MAX; i++)
    {
        ALL[i]->Viev();
        std::cout << std::endl;
    }
    for (int i = 0; i < MAX; i++)
    {
        delete ALL[i];
    }
    std::cout << "Done.\n";
    return 0;
}
