#include <iostream>
#include "g11l5.h"

int main()
{
    Stonewt ing(245);
    std::cout << ing << std::endl;
    ing.stone_mode();
    std::cout << ing << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Stonewt ll(21, 3);
    std::cout << ll << std::endl;
    ll.pounds_mode();
    std::cout << ll << std::endl;
    Stonewt ang(100);
    Stonewt SUM;
    SUM = ang + ing;
    std::cout << SUM << std::endl;
    SUM.stone_mode();
    std::cout << SUM << std::endl;
    return 0;
}