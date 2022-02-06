#include <iostream>
#include <cstdlib>
#include <cstring>
#include "golf10.h"

golf::golf()
{
    name[0] = '\0';
    handicap = 0;
}
golf::golf(const char * str, int x)
{
    handicap = x;
    strcpy(name, str);
}

int golf::setgolf()
{
    // int entered = 0;
    std::cout << "Please enter name: ";
    char names[50];
    std::cin.getline(names, 50);
    int sizestrname = strlen(names);
    if (sizestrname > 0)
    {
        // entered = 1;
        int hand;
        std::cout << "Enter a handicap: ";
        std::cin >> hand;
        handicap = hand;
        *this = golf(names, hand);
        std::cin.get();
        return true;
    }
    return false;
}
void golf::showgolf()
{
    std::cout << name << ", " << handicap << std::endl;
}