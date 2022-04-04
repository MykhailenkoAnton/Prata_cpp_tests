#include <iostream>
#include "G11L6.h"

int main()
{
    Stonewt A(234);
    Stonewt B(420);
    std::cout << A.operator==(B);
    return 0;
}