#include <iostream>
int mounth(int);
int main ()
{
    std::cout << "Enter, please, how old are you?: ";
    int age;
    std::cin >> age;
    int mounth_age = mounth(age);
    std::cout << "Your age is " << age << std::endl;
    std::cout << "This is " << mounth_age << " mounth!\n";
    return 0;
}
int mounth(int a)
{
    int x = 12;
    int in_mounth = x * a;
    return in_mounth;
}