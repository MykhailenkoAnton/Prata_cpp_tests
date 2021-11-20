#include <iostream>
#include <string>
int main()
{
    std::cout << "Enter your first name: ";
    std::string name;
    getline(std::cin, name);
    std::cout << "Enter your last name: ";
    std::string l_name;
    getline(std::cin, l_name);
    std::string full_name;
    full_name += name;
    full_name += ", ";
    full_name += l_name;
    std::cout << "Here's the information in a single string: " << full_name << std::endl;
    return 0;
}