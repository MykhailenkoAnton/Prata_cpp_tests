#include <iostream>
#include "swonet1.h"

int main()
{
    Swonet1 poppins(9, 2.8);
    double p_wt = poppins; // неявное преобразование
    std::cout << "Convert to double => ";
    std::cout << "Poppins: " << p_wt << " pounds. \n";
    std::cout << "Convert to int => " ;
    std::cout << "Poppins: " << int (poppins) << " pounds. \n";
    return 0;
}