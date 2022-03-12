#include "mytime2.h"
#include <iostream>

int main()
{
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    std::cout << "weeding time = "; // время на подготовку
    weeding.Show();
    std::cout << std::endl;

    std::cout << "waxing time = "; // полезное время
    waxing.Show();
    std::cout << std::endl;

    std::cout << "total work time: "; // общее рабочее время
    total = weeding + waxing;
    total.Show();
    std::cout << std::endl;

    diff = weeding - waxing;
    std::cout << "weeding time - waxing time = ";
    diff.Show();
    std::cout << std::endl;

    adjusted = total * 1.5;
    std::cout << "adjusted work time = ";
    adjusted.Show();
    std::cout << std::endl;
    
    return 0;
}