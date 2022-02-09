#include <iostream>
#include <cstdlib>
#include <cstring>
#include "plorg.h"

void plorg::showplorg()
{
    std::cout << name << ", " << CI << std::endl;
}
void plorg::add_CI(int n)
{
    CI += n;
}
void plorg::pop_CI(int n)
{
    CI -= n;
}
// plorg::plorg(const char * plor, int n)
// {
//     std::cout << plor << ", " << n << std::endl;
//     strcpy(name, plor);
//     CI = n;
// }
plorg::plorg()
{
    const char * pl = "Plorga";
    strcpy(name, pl);
    CI = 50;
}
