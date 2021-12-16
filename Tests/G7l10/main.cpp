#include <iostream>
double dbl(double d, double x);
double calculate(double x, double y, double (*db) (double, double));
int main()
{
    std::cout << "Enter please 2 numbers: ";
    double nm1, nm2;
    
    while (!(std::cin >> nm1 >> nm2))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
        {
            continue;
        }
        std::cout << "Bad input, try again: ";
    }
    std::cout << calculate(nm1, nm2, dbl);
    return 0;
}
double dbl(double a, double b)
{
    return a + b;
}
double calculate(double x, double y, double (*db)(double, double))
{
    std::cout << "U rezult is: ";
    double rezult = (*db)(x, y);
    return rezult;
}