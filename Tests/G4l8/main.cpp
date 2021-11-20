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
    pizza * Piz = new pizza;

    std::cout << "Enter diametr pizza: ";
    std::cin >> Piz->diametr_pizza;
    std::cout << "Enter name company: ";
    std::cin >> Piz->name_company;
    std::cout << "Enter weight pizza: ";
    std::cin >> Piz->weight_pizza;

    std::cout << "Okay, u entered: " << std::endl;
    std::cout << Piz->name_company << std::endl;
    std::cout << Piz->diametr_pizza << std::endl;
    std::cout << Piz->weight_pizza << std::endl;
    delete Piz;
    return 0;
}
