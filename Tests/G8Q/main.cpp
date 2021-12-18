#include <iostream>
#include <string>
// 8.1
// inline double square(double x) {return x * x;}
// int main()
// {
//     double a, b;
//     double c = 13.0;
//     a = square(5.0);
//     b = square(4.5 + 7.5);
//     std::cout << "a = " << a << ",b = " << b;
//     std::cout << ",c = " << c << std::endl;
//     std::cout << "C squared = " << square(c++) << "\n";
//     std::cout << "Now c = " << c << std:: endl;
//     return 0;
// }

// 8.2
// int main()
// {
    // int rats = 101;
    // int & rodents = rats;
    // std::cout << "rats = " << rats;
    // std::cout << ", rodents = " << rodents << std::endl;
    // rodents++;
    // std::cout << "rats = " << rats;
    // std::cout << ", rodents = " << rodents << std::endl;
    // std::cout << "adress rats = " << &rats;
    // std::cout << ", adress rodents = " << &rodents << std::endl;
    // return 0;
// }

// 8.3
// int main()
// {
//     int rats = 101;
//     int & rodents = rats;
//     std::cout << "rats = " << rats;
//     std::cout << ", rodents = " << rodents << std::endl;
//     rodents++;
//     std::cout << "rats = " << rats;
//     std::cout << ", rodents = " << rodents << std::endl;
//     std::cout << "adress rats = " << &rats;
//     std::cout << ", adress rodents = " << &rodents << std::endl;

//     int buisness = 50;
//     rodents = buisness;
//     std::cout << "buisness = " << buisness;
//     std::cout << ", rats = " << rats;
//     std::cout << ", rodents = " << rodents << std::endl;


//     std::cout << "buisness adress = " << &buisness;
//     std::cout << ", adress rodents = " << &rodents << std::endl;
//     return 0;
// }

//8.4
void swarp(int & a, int & b);
void swapp(int * p, int * q);
void swavv(int a, int b);
int main()
{
    int wallet1 = 300;
    int wallet2 = 400;
    std::cout << "wallet1 = $" << wallet1;
    std::cout << ", wallet2 = $" << wallet2 << std::endl;

    std::cout << "Using references to swap contents:\n";
    swarp(wallet1, wallet2);
    std::cout << "wallet1 = $" << wallet1;
    std::cout << ", wallet2 = $" << wallet2 << std::endl;

    int * a = &wallet1;
    int * b = &wallet2;

    std::cout << "?????? !!! Using pointers to swap contents again:\n";
    swapp(a, b);
    std::cout << "wallet1 = $" << wallet1;
    std::cout << ", wallet2 = $" << wallet2 << std::endl;

    std::cout << "Trying to use passing by value:\n";
    swavv(wallet1, wallet2);
    std::cout << "wallet1 = $" << wallet1;
    std::cout << ", wallet2 = $" << wallet2 << std::endl;

    return 0;
}
void swarp(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int * p, int * q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swavv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}