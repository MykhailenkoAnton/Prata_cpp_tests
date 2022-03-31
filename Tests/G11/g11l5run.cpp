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

    Stonewt dif;
    dif = ing - ang;
    std::cout << dif << std::endl;
    dif.stone_mode();
    std::cout << dif << std::endl;

    Stonewt GO;
    GO = ing * 1.5;
    std::cout << GO << std::endl;
    GO.stone_mode();
    std::cout << GO << std::endl;

    Stonewt GOA;
    GOA = 2.5 * ing;
    std::cout << GOA << std::endl;
    GOA.stone_mode();
    std::cout << GOA << std::endl;
    return 0;
}