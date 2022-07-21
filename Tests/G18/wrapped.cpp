#include<functional>
#include <iostream>
#include "somedef.h"

double dub(double x) {return 2.0 * x;}
double square(double x) {return x * x;}

int main()
{
    double y = 1.21;
    std::function<double(double)> ef1 = dub;
    std::function<double(double)> ef2 = square;
    std::function<double(double)> ef3 = Fp(10.0);
    std::function<double(double)> ef4 = Fq(10.0);;
    std::function<double(double)> ef5 = [](double u) {return u * u;};
    std::function<double(double)> ef6 = [](double u) {return u+u / 2.0;};
    std::cout << "Function pointer dub:\n"; // указатель на функцию dub
    std::cout << " " << use_f(y, ef1) << std::endl;
    std::cout << "Function pointer square:\n"; // указатель на функцию square
    std::cout << " " << use_f(y, ef2) << std::endl;
    std::cout << "Function object Fp:\n"; // функциональный объект Fp
    std::cout << " " << use_f(y, ef3) << std::endl;
    std::cout << "Function object Fq:\n"; // функциональный объект Fq
    std::cout << " " << use_f(y, ef4) << std::endl;
    std::cout << "Lambda expression l:\n"; // лямбда-выражение 1
    std::cout << " " << use_f(y, ef5) << std::endl;
    std::cout << "Lambda expression 2:\n"; // лямбда-выражение 2
    std::cout << " " << use_f(y, ef6) << std::endl;
    return 0;
}