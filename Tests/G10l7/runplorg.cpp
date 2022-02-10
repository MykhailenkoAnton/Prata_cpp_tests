#include <iostream>
#include <cstring>
#include "plorg.h"

int main()
{
    // plorg P1[3];
    // std::cout << "Enters please plorg names and value: ";
    // char nm[20];
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cin.getline(nm, 20);
    //     P1[i].set_name(nm);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     std::cout << P1[i].get_name();
    //     std::cout << std::endl;
    // }
    plorg P1;
    P1.add_CI(20);
    plorg P2;
    P2.add_CI(30);
    P1.compare_CI(P2);
    return 0;
}