#include <iostream>
#include "time.h"
int main()
{
    // Time planning;
    // Time coding(2, 40);
    // Time fixing(5, 55);
    // Time total;

    // std::cout << "planning time = ";
    // planning.Show();
    // std::cout << std::endl;
    // std::cout << "coding time = ";
    // coding.Show();
    // std::cout << std::endl;
    // std::cout << "fixing time = ";
    // fixing.Show();
    // std::cout << std::endl;
    // total = coding + fixing;
    // std::cout << "coding + fixing = ";
    // total.Show();
    // std::cout << std::endl;

    // Time morefixing(3, 28);
    // morefixing.Show();
    // std::cout << std::endl;
    // total = morefixing.operator+(total);
    // std::cout << "morefixing.operator+(total) = ";
    // total.Show();
    // std::cout << std::endl;


    // std::cout << "coding. Sum (fixing) = ";
    // total = coding.operator+(fixing);
    // total.Show();
    // std::cout << std::endl;

    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    std::cout << "weeding time = "; // время на подготовку
    weeding.Show();
    std::cout << std::endl;

    std::cout << "waxing time = "; // полезное время
    std::cout << waxing;
    std::cout << std::endl;

    std::cout << "Total work time = "; // общее рабочее время
    total = weeding + waxing;
    total.Show();
    std::cout << std::endl;

    diff = weeding.operator-(waxing);
    std::cout << "weeding time - waxing time = ";
    diff.Show();
    std::cout << std::endl;

    adjusted = total * 1.5;
    std::cout << "adjusted work time = ";
    adjusted.Show();
    std::cout << std::endl;


    Time trip(19, 22);
    std::cout << "Time trip = " << trip << "(Thuesday)\n";
    return 0;
}