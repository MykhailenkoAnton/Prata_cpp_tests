#include <iostream>
#include <string>
struct pizza
{
    std::string name_company;
    float diametr_pizza;
    float weight_pizza;
};

int main()
{
    pizza PIZ;
    std::cout << "Enter please name company: ";
    std::cin >> PIZ.name_company;
    std::cout << "Enter please diametr: ";
    std::cin >> PIZ.diametr_pizza;
    std::cout << "Enter pleae weight: ";
    std::cin >> PIZ.weight_pizza;

    std::cout << "Okay, u entered: " << std::endl;
    std::cout << PIZ.name_company << std::endl;
    std::cout << PIZ.diametr_pizza << std::endl;
    std::cout << PIZ.weight_pizza << std::endl;
    return 0;
}
