#include <iostream>
#include "g11l4.h"

int main()
{
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    std::cout << "Aida and Tosca:\n";
    std::cout << aida << ", " << tosca << std::endl;
    temp = aida + tosca;
    std::cout << "Aida + Tosca: " << temp << std::endl;
    temp = aida - tosca;
    std::cout << "Aida - Tosca: " << temp << std::endl;
    temp = 10.0 * aida;
    std::cout << "10.0 * aida: " << 10.0 * aida << std::endl;
    temp = aida * 1.17;
    std::cout << "Aida * 1.17: " << temp << std::endl;
    return 0;
}