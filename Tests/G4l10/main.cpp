#include <iostream>
#include <array>
int main()
{
    std::array <double, 3> runs;
    std::cout << "Enter please rezults 40m runs: " << std::endl;
    std::cout << "First: ";
    std::cin >> runs[0];
    std::cout << "Second: ";
    std::cin >> runs[1];
    std::cout << "Third: ";
    std::cin >> runs[2];

    std::cout << "The avarage is " << (runs[0] + runs[1] + runs[2]) / 3 << std::endl;
    return 0;
}
