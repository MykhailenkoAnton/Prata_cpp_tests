#include <iostream>
#include <cstdlib>
#include <cfloat>
double hmean(double a, double b);

int main()
{
    double x, y, z;
    std::cout << "Enter two numbers: "; // запрос на ввод двух чисел
    while (std::cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
        }
        catch(const char * s)
        {
            std::cout << s << std::endl;
            std::cout << "Enter a new pair of numbers: "; //запрос на ввод новой пары чисел
            continue;
        }
        std::cout << "Harmonic mean of " << x << " and " << y
                    << " is " << z << std::endl; // вывод среднего гармонического
        std::cout << "Enter next set of numbers <q to quit>: " ; // запрос следующих двух чисел
    }
    std::cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
    {
        throw "bad hmean() arguments: a = -b not allowed";
    }
    return 2.0 * a * b / (a + b);
}