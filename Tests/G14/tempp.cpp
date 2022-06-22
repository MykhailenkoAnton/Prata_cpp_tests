#include <iostream>
#include "stack.h"

template <template<typename Type> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};
    // Предполагается, что класс thing имеет члены push() и pop ()
    bool push(int a, double x) {return s1.push(a) && s2.push(x); }
    bool pop(int & a, double & x) {return s1.pop(a) && s2.pop(x);}
};

int main()
{
    Crab<Stack> nebula;
    // Stack должен соответствовать шаблону template <typename T> class Thing
    int ni;
    double nb;
    std::cout << "Enter int double pairs, such as 4 3.5 (0 0 to end) :\n";
        // Ввод пар чисел int и double
    while (std::cin >> ni >> nb && ni > 0 && nb > 0)
    {
        if (!nebula.push(ni, nb))
        {
            break;
        }
    }

    while (nebula.pop(ni, nb))
    {
        std::cout << ni << ", " << nb << std::endl;
    }
    
    std::cout << "Done.\n";
    return 0;
}