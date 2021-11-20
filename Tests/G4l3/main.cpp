#include <iostream>
#include <cstring>
int main()
{
    char name[10];
    char l_name[15];
    char name_and_l_name[30];
    std::cout << "Enter u name: ";
    std::cin.getline(name, 10);
    std::cout << "Enter u l_name: ";
    std::cin.getline(l_name, 15);

    strcpy(name_and_l_name, name);
    strcat(name_and_l_name, ", ");
    strcat(name_and_l_name, l_name);

    std::cout << "Here's the information in a single string: " << name_and_l_name << std::endl;

    return 0;
}
