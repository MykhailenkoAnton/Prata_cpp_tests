#include <iostream>
#include "somedef.h"

double dub(double x) {return 2.0 * x;}
double square(double x) {return x * x;}

int main()
{
    double y = 1.21;
    std::cout << "Function pointer dub:\n"; // указатель на функцию dub
    std::cout << " " << use_f(y, dub) << std::endl;
    std::cout << "Function pointer square:\n"; // указатель на функцию square
    std::cout << " " << use_f(y, square) << std::endl;
    std::cout << "Function object Fp:\n"; // функциональный объект Fp
    std::cout << " " << use_f(y, Fp(5.0)) << std::endl;
    std::cout << "Function object Fq:\n"; // функциональный объект Fq
    std::cout << " " << use_f(y, Fq(5.0)) << std::endl;
    std::cout << "Lambda expression l:\n"; // лямбда-выражение 1
    std::cout << " " << use_f(y, [](double u) {return u*u;}) << std::endl;
    std::cout << "Lambda expression 2:\n"; // лямбда-выражение 2
    std::cout << " " << use_f(y, [](double u) {return u*u / 2.0;}) << std::endl;
    return 0;
}