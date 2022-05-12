#include <iostream>
#include <cstring>

#include "head.h"

// Cd 
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strncpy(performers, s1, 49);
    performers[49] = '\0';
    strncpy(label, s2, 19);
    label[19] = '\0';
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label, 19);
    performers[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}
void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
    std::cout << std::endl;
}
Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
    {
        return *this;
    }
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label, 19);
    performers[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
// Classic

void Classic::Report() const
{
    Cd::Report();
    std::cout << "mainName: " << mainName << std::endl;
}
Classic::Classic(const char * s,const char * s1,const char * s2, int n, double x) : Cd(s1, s2, n, x)
{
    strncpy(mainName, s, 49);
    mainName[49] = '\0';
}
Classic::Classic(const char * s, const Cd & c) : Cd(c)
{
    strncpy(mainName, s, 49);
    mainName[49] = '\0';
}
Classic::Classic() : Cd()
{
    mainName[0] = '\0';
}
Classic::Classic(const Classic & c) : Cd(c)
{
    strncpy(mainName, c.mainName, 49);
    mainName[49] = '\0';
}
Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
    {
        return *this;
    }
    Cd::operator=(c);
    strncpy(mainName, c.mainName, 49);
    mainName[49] = '\0';
    return *this;
}