#include <iostream>
#include "time.h"
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
    std::cout << "coding + fixing = ";
    total.Show();
    std::cout << std::endl;

    Time morefixing(3, 28);
    morefixing.Show();
    std::cout << std::endl;
    total = morefixing.operator+(total);
    std::cout << "morefixing.operator+(total) = ";
    total.Show();
    std::cout << std::endl;


    // std::cout << "coding. Sum (fixing) = ";
    // total = coding.operator+(fixing);
    // total.Show();
    // std::cout << std::endl;

    
    return 0;
}