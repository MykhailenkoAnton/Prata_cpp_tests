#include <iostream>
#include <cstring>
#include <cstdlib>
#include "golf.h"

void showgolf(const golf & gr)
{
    int x = strlen(gr.name);
    char * c = new char[x + 1];
    strcpy(c, gr.name);  
    std::cout << c << " is " << gr.handicap << std::endl; // cout gr.name
}

void setgolf(golf & gg, const char * s, int n)
{
    int str = strlen(s);
    char * st = new char[str + 1];
    strcpy(gg.name, s);
    gg.handicap = n;
}

void handicap(golf & ggg, int n)
{
    ggg.handicap = n;
}

int setgolf(golf & g)
{
    std::cout << "please Enter a name: ";
    std::cin.get(g.name, Len);
    int ret = strlen(g.name);
    if (ret > 0)
    {
        std::cout << "Please enter a handicap: ";
        int handic;
        std::cin >> handic;
        g.handicap = handic;
        return true;
    }
    else
    {
        return 0;
    }

}