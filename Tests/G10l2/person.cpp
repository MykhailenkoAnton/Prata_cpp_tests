#include <cstring>
#include <iostream>
#include "person.h"
person::person()
{
    lname = "HELLO";
    fname[0] = '\0';
}
person::person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
};
person::person(const char * lln)
{
    strcpy(fname, lln);
    lname = lln;                        // +-
}
void person::Show() const
{
    std::cout << fname << ", ";
    std::cout << lname << std::endl;
}
void person::FormalShow() const
{
    std::cout << lname << ", ";
    std::cout << fname << std::endl;
}