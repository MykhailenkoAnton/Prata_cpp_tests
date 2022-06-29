#include <iostream>
#include <cmath>
#include <string>
#include "exc_mean.h"

class demo
{
private:
    std::string word;
public:
    demo(const std::string & str)
    {
        word = str;
        std::cout << "demo " << word << " created\n"; // строка создана
    }
    ~demo()
    {
        std::cout << "demo " << word << " destroyed\n"; // строка уничтожена
    }
    void show() const
    {
        std::cout << "demo " << word << " lives\n"; // строка существует
    }
};

double hmean(double a, double b);
double gmean(double a, double b);
double means(double a, double b);

int main()
{
    double x, y, z;
    {

        demo d1("found in block main()");
        std::cout << "Enter two numbers: "; // запрос на ввод двух чисел
        while (std::cin >> x >> y)
        {
            try
            {
                z = means(x, y);
                std::cout << "The mean mean of " << x << " and " << y
                        << " is " << z << std::endl; // вывод среднего из средних
                std::cout << "Enter next pair: "; // ввод следующей пары
            }
            catch(bad_hmean & bg)
            {
                bg.mesq();
                std::cout << "Try again.\n"; // необходимо повторить попытку
                continue;
            }
            catch(bad_gmean & bh)
            {
                std::cout << bh.mesq();
                std::cout << "Values used: " << bh.v1 << ", "
                            << bh.v2 << std::endl; // используемые знарчения
                std::cout << "Sorry, you don't get to play any more.\n"; // завершение работы
                break;
            }
            
        }
        d1.show();
    }

    std::cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
    {
        throw bad_hmean(a, b);
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

double means(double a, double b)
{
    double am, hm, gm;
    demo d2("found in means()");
    am = (a + b) / 2.0;
    try
    {
        hm = hmean(a, b);
        gm = gmean(a, b);
    }
    catch(bad_gmean & bh)
    {
        bh.mesq();
        std::cout << "Caught in means()\n";
        throw; // повторная генерация исключения
    }
    d2.show();
    return (am + hm + gm) / 3.0;
}