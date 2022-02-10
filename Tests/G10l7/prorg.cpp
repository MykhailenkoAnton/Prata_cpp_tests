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
    CI = n;
}
void plorg::pop_CI(int n)
{
    CI -= n;
}
plorg::plorg()
{
    name = "Plorga";
    CI = 50;
}
void plorg::set_name(const std::string & str)
{
    name = str;
    
}
std::string plorg::get_name() const
{
    return name;
}
void plorg::compare_CI(plorg & P) const
{
    if (P.CI > this->CI)
    {
        cout << P.CI;
    }
    else
    {
        cout << this->CI;
    }
}