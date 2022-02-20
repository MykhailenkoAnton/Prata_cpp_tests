#include <iostream>
#include "stonewt1.h"

int main()
{
    Stonewt poppins(9, 2.8); // 9 стоунов, 2.8 фунта
    double p_wt = poppins; // неявное преобразование
    std::cout << "Convert to double => ";
    std::cout << "Poppins: " << p_wt << " pounds. \n";
    std::cout << "Convert to int => " ;
    std::cout << "Poppins: " << int (poppins) << " pounds. \n";
    return 0;
}