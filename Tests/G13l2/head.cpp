#include <iostream>
#include <cstring>
#include "head.h"

// Cd
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}
Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
    {
        return *this;
    }
    delete [] performers;
    delete [] label;
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
void Cd::Report() const
{
    std::cout << "Performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "Selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
    std::cout << std::endl;
}

//Classic
void Classic::Report() const
{
    Cd::Report();
    std::cout << "mainname: " << mainName << std::endl;
}
Classic::Classic(const char * s, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x)
{
    mainName = new char[strlen(s) + 1];
    strcpy(mainName, s);
}
Classic::Classic(const char * s, const Cd & c) : Cd(c)
{
    mainName = new char[strlen(s) + 1];
    strcpy(mainName, s);
}
Classic::~Classic()
{
    delete [] mainName;
}
Classic::Classic() : Cd()
{
    mainName = new char[1];
    mainName[0] = '\0';
}
Classic::Classic(const Classic & c) : Cd(c)
{
    mainName = new char[strlen(c.mainName) + 1];
    strcpy(mainName, c.mainName);
}
Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
    {
        return *this;
    }
    Cd::operator=(c);
    delete [] mainName;
    mainName = new char[strlen(c.mainName) + 1];
    strcpy(mainName, c.mainName);
    return *this;
}