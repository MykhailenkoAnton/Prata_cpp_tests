#include <iostream>
#include "coordin.h"
int main()
{
    rect rplace;
    polar pplace;
    std::cout << "Enter the x and у values: ";
    while (std::cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        showpolar(pplace);
        std::cout << "Next two numbers (q to quit) : ";
    }
    std::cout << "Done!\n";
    return 0;
}