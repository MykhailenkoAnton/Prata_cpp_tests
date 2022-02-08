#include <iostream>
#include "namclass.h"

int main()
{

    std::cout << std::endl;
    SALES::sal s1;
    s1.showsal();
    
    std::cout << std::endl;

    double ars[4] = {40, 185, 200, 12};
    SALES::sal s2(ars, 4);
    s2.showsal();

    return 0;
}