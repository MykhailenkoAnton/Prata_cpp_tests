#include <iostream>

int main()
{
    std::cout << "Enter world population: ";
    long long w_p;
    std::cin >> w_p;
    std::cout << "Enter USA population: ";
    long long us_p;
    std::cin >> us_p;
    double procent_1 = w_p / 100;
    double procent_USA = us_p / procent_1;
    std::cout << "Finally = " << procent_USA << std::endl;
    return 0;
}
