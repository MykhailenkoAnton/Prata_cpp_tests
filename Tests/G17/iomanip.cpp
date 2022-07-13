#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    // Использование новых стандартных манипуляторов
    std::cout << std::fixed << std::right;

    // Использование манипуляторов iomanip для извлечения
    // квадратного корня и корня четвертой степени

    std::cout << std::setw(6) << "N" << std::setw(14) << "square root" << std::setw(15) << "fourth root\n";
    double root;
    for (int i = 10; i <= 100; i+= 10)
    {
        root = sqrt(double(i));
        std::cout << std::setw(6) << std::setfill('.') << i << std::setfill(' ')
                << std::setw(12) << std::setprecision(3) << root
                << std::setw(14) << std::setprecision(4) << sqrt(root) << std::endl;
    }
    
    return 0;
}