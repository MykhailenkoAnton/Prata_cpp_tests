#include <iostream>
#include <cstring>
#include "gl13.h"
// baseALL

baseALL::baseALL(const char * l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}
baseALL::baseALL(const baseALL & ba)
{
    label = new char[strlen(ba.label) + 1];
    strcpy(label, ba.label);
    rating = ba.rating;
}
baseALL::~baseALL()
{
    delete [] label;
}
baseALL & baseALL::operator=(const baseALL & ba)
{
    if (this == &ba)
    {
        return *this;
    }
    delete [] label;
    label = new char[strlen(ba.label) + 1];
    strcpy(label, ba.label);
    rating = ba.rating;
    return *this;
}
void baseALL::Viev() const
{
    std::cout << "labe: " << label << std::endl;
    std::cout << "rating: " << rating << std::endl;
}

//baseDMA
void baseDMA::Viev() const
{
    baseALL::Viev();
}
baseDMA::baseDMA(const char * l, int r) : baseALL(l, r)
{
}

//luckDMA
void luckDMA::Viev() const
{
    baseALL::Viev();
    std::cout << "color: " << color << std::endl;
}
luckDMA::~luckDMA()
{
    delete [] color;
}
luckDMA::luckDMA(const char * c, const char * l, int r) : baseALL(l, r)
{
    color = new char[strlen(c) + 1];
    strcpy(color, c);
}
luckDMA::luckDMA(const char * c, const baseALL & ba) : baseALL(ba)
{
    color = new char[strlen(c) + 1];
    strcpy(color, c);
}
luckDMA::luckDMA(const luckDMA & lc) : baseALL(lc)
{
    color = new char[strlen(lc.color) + 1];
    strcpy(color, lc.color);
}
luckDMA & luckDMA::operator=(const luckDMA & lc)
{
    if (this == &lc)
    {
        return *this;
    }
    baseALL::operator=(lc);
    delete [] color;
    color = new char[strlen(lc.color) + 1];
    strcpy(color, lc.color);
    return *this;
}

//hasDMA
void hasDMA::Viev() const
{
    baseALL::Viev();
    std::cout << "style: " << style << std::endl;
}
hasDMA::~hasDMA()
{
    delete [] style;
}
hasDMA::hasDMA(const char * s, const char * l, int r) : baseALL(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::hasDMA(const char * s, const baseALL & ba) : baseALL(ba)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA & hs) : baseALL(hs)
{
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
}
hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
    {
        return *this;
    }
    baseALL::operator=(hs);
    delete [] style;
    style = new char[strlen(hs.style) + 1];
    strcpy(style, hs.style);
    return *this;
}