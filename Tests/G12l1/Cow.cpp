#include <iostream>
#include <cstring>
#include "Cow.h"

Cow::Cow()
{
    strcpy(name, "Cow");
    hobby = new char[4];
    strcpy(hobby, "NON");
    weight = 10;
}
Cow::Cow(const char * nm, const char * h, double wt)
{
    strcpy(name, nm);
    int len = strlen(h);
    hobby = new char[len + 1];
    strcpy(hobby, h);
    weight = wt;
}
Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}
Cow & Cow::operator=(const Cow & c)
{
    if (this == &c)
    {
        return *this;
    }
    delete [] hobby;
    strcpy(name, c.name);
    int len = strlen(c.hobby);
    hobby = new char[len + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}
Cow::~Cow()
{
    std::cout << "Object " << hobby << " deleted! All good!\n"; 
    delete [] hobby;
}
void Cow::ShowCow() const
{
    std::cout << name << ", " << hobby << ", " << weight << std::endl;
}