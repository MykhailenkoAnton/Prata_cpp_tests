#include <iostream>
#include "namesp.h"
using namespace SALES;

int main()
{
    Sales sal1;
    Sales sal2;
    double ars[QUATERS] = {1, 5, 2, 4};

    setSales(sal1, ars, 4);
    showSales(sal1);
    setSales(sal2);
    showSales(sal2);
    return 0;
}
