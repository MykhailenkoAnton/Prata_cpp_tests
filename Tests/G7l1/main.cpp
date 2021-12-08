#include <iostream>
#include <string>
double grm(double, double);
int main()
{
    std::cout << "enter 2 numbers: ";
    double nm1, nm2;
    double x;
    // while ((std::cin >> nm1 >> nm2) && nm1 != 0 && nm2 != 0)
    // {
    //     double x = grm(nm1, nm2);
    //     std::cout << x << std::endl;
    // }
    std::cin >> nm1 >> nm2;
    while (nm1 != 0 && nm2 != 0)
    {
        std::cout << grm(nm1, nm2) << std::endl;
        std::cin >> nm1 >> nm2;
    }
    return 0;
}
double grm(double n1, double n2)
{
    double gr = 2.0 * n1 * n2 / (n1 + n2);
    return gr;
}