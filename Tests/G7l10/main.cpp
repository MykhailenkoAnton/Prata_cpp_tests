#include <iostream>
double dbs(double d, double x);
double dba(double, double);
void calculate(double x, double y, double (*db[]) (double, double));
// double (*pf[2])(double, double);

int main()
{
    std::cout << "Enter please 2 numbers: ";
    double nm1, nm2;
    double (*pf[2])(double, double) = {dbs, dba};
    while (!(std::cin >> nm1 >> nm2))
    {
        std::cin.clear();
        while (std::cin.get() != '\n')
        {
            continue;
        }
        std::cout << "Bad input, try again: ";

    }
    calculate(nm1, nm2, pf);
    // std::cout << "Avarage sum = " << calculate(nm1, nm2, dba) << std::endl;
    
    return 0;
}
double dbs(double a, double b)
{
    return a + b;
}
void calculate(double x, double y, double (*db[])(double, double))
{
    // std::cout << "U rezult is: ";
    // double rezult = (*db)(x, y);
    // return rezult;
    for (int i = 0; i < 2; i++)
    {
        std::cout << db[i](x, y) << std::endl;
    }
}
double dba (double z, double r)
{
    double avarage;
    avarage = (z + r) / 2;
    return avarage;
}

