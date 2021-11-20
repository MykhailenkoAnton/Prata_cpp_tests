#include <iostream>
const int sec_per_min = 60;
const int min_per_degree = 60;
int main()
{
    std::cout << "Enter degree: ";
    double degree;
    std::cin >> degree;
    std::cout << "Enter minutes: ";
    double minuts;
    std::cin >> minuts;
    std::cout << "Enter seconds: ";
    double seconds;
    std::cin >> seconds;

    double finally = ((degree * min_per_degree + minuts) * sec_per_min + seconds) / min_per_degree / sec_per_min;
    std::cout << finally << std::endl;
    return 0;
}
