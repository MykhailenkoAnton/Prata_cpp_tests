#include <iostream>
#include <cstring>
#include <cstdlib>
#include "golf.h"
static int count = 1;
int main()
{
    golf Anna;
    golf Nana;
    int i = 0;
    // while (count != 0 && i < 3)
    // {
    //     count = setgolf(Anna[i]);
    //     std::cin.get();
    //     i++;
    // }
    setgolf(Anna);
    setgolf(Nana, Anna.name, Anna.handicap);
    showgolf(Nana);

    handicap(Nana, 200);
    showgolf(Nana);
    
}