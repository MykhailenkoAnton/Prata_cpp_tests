#include "mytime1.h"
#include <iostream>

int main()
{
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    std::cout << "planning time = ";
    planning.Show();
    std::cout << std::endl;

    std::cout << "coding time = ";
    coding.Show();
    std::cout << std::endl;

    std::cout << "fixing time = ";
    fixing.Show();
    std::cout << std::endl;

    total = coding + fixing;
    // Нотация с операцией
    std::cout << "coding and fixing time = ";
    total.Show();
    std::cout << std::endl;

    Time morefixing(3, 28);
    std::cout << "morefixing time = ";
    morefixing.Show();
    std::cout << std::endl;

    total = morefixing.operator+(total);
    // Нотация с функцией
    std::cout << "morefixing.operator+(total) = ";
    total.Show();
    std::cout << std::endl;
    return 0;
}