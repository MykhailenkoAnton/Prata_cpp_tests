#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
    double x, y, z;
    std::cout << "Enter two numbers: "; // запрос на ввод двух чисел
    while (std::cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            std::cout << "Harmonic mean of " << x << " and " << y
                        << " is " << z << std::endl; // вывод среднего гармонического

            std::cout << "Geometric mean of " << x << " and " << y
                        << " is " << gmean(x,y) << std::endl; // вывод среднего геометрического
            
            std::cout << "Enter next set of numbers <q to quit>: "; // ввод следующей пары чисел
        }
        catch(bad_mean & bm)
        {
            bm.mesq();
            std::cout << "Try again.\n"; // необходимо повторить попытку
            continue;
        }
        catch(bad_gmean & bg)
        {
            std::cout << bg.mesq();
            std::cout << "Values used: " << bg.v1 << ", "
                        << bg.v2 << std::endl; // используемые знарчения
            std::cout << "Sorry, you don't get to play any more.\n"; // завершение работы
            break;
        }
    }
    std::cout << "Bye\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
    {
        throw bad_mean(a, b);
    }
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
    {
        throw bad_gmean(a, b);
    }
    return std::sqrt(a * b);
}