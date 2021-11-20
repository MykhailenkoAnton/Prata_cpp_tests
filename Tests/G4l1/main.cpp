#include <iostream>
#include <string>
int main ()
{
    std::string name;
    std::cout << "ENTER! What is your last name?: ";
    getline(std::cin, name);
    std::cout << "ENTER! What is your last name?: ";
    char l_name[10];
    std::cin >> l_name;
    std::cout << "ENTER! What letter grade do you deserve?: ";
    char letter;
    std::cin >> letter;

    int age;
    std::cout << "ENTER! What is u age?: ";
    std::cin >> age;

    std::cout << "Name: " << name << ", " << l_name << std::endl;
    letter = letter + 1;
    std::cout << "Grade: " << letter << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}
