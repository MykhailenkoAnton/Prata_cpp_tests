#include <iostream>
double dbs(double d, double x);
double dba(double, double);
double calculate(double x, double y, double (*db[]) (double, double));
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
    std::cout << "Sum = " <<  calculate(nm1, nm2, dbs) << std::endl;
    std::cout << "Avarage sum = " << calculate(nm1, nm2, dba) << std::endl;
    return 0;
}
double dbs(double a, double b)
{
    return a + b;
}
double calculate(double x, double y, double (*db)(double, double))
{
    std::cout << "U rezult is: ";
    double rezult = (*db)(x, y);
    return rezult;
}
double dba (double z, double r)
{
    double avarage;
    avarage = (z + r) / 2;
    return avarage;
}
