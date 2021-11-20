#include <iostream>
#include <string>
int main()
{
    std::cout << "Enter your name:\n";
    std::string name;
    getline(std::cin, name);
    std::cout << "Enter your favorite dessert:\n";
    std::string dessert;
    getline(std::cin, dessert);
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << "." << std::endl;
    return 0;
}
