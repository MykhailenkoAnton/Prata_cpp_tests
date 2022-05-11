#include <iostream>
#include <cstring>
#include "dma.h"

// Методы baseDMA
baseDMA::baseDMA(const char * l, int r)
{
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}
baseDMA::baseDMA(const baseDMA & rs)
{
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}
baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if (this == &rs)
    {
        return *this;
    }
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}
baseDMA::~baseDMA()
{
    delete [] label;
}
std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}
// Методы lacksDMA
lacksDMA::lacksDMA(const char * c, const char * l, int r) : baseDMA(l, r)
{
    strncpy(color, c, 39);
    color[39] = '\0';
}
lacksDMA::lacksDMA(const char * c, const baseDMA & rs) : baseDMA(rs)
{
    strncpy(color, c, 39);
    color[39] = '\0';
}
std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << (const baseDMA &) rs;
    os << "Color: " << rs.color << std::endl;
    return os;
}
// Методы hasDMA
hasDMA::hasDMA(const char * s, const char * l, int r) : baseDMA(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::hasDMA(const char * s, const baseDMA & rs) : baseDMA(rs)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}
hasDMA::~hasDMA()
{
    delete [] style;
}
hasDMA::hasDMA(const hasDMA & rs) : baseDMA(rs) // вызывает конструктор копирования базового класса
{
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
}
hasDMA & hasDMA::operator=(const hasDMA & rs)
{
    if (this == &rs)
    {
        return * this;
    }
    baseDMA::operator=(rs);
    delete [] style;
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
    return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << (const baseDMA &) rs;
    os << "Style: " << rs.style << std::endl;
    return os;
}