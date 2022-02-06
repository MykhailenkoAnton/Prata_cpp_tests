#include <iostream>
#include "golf10.h"
int main()
{
    // golf G;
    // G.setgolf();
    // G.showgolf();
    golf G1[3];
    int count = 0;
    int i;
    for (i = 0; i < 3; i++)
    {
        count = G1[i].setgolf();
        if (count == 0)
        {
            break;
        }
    }
    if (i == 0)
    {
        std::cout << "Bye!\n";
    }
    else
    {
        for (int j = 0; j < i; j++)
        {
            G1[j].showgolf();
        }
    }
    return 0;
}