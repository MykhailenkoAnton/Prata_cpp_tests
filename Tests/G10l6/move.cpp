#include <iostream>
#include "move.h"

move::move(double a, double b)
{
    x = a;
    y = b;
}

void move::showmove() const
{
    std::cout << x << " " << y << std::endl;
}

void move::reset(double a, double b)
{
    x = a;
    y = b;
}

move move::add(const move & m) const
{
    move z;
    z.x = m.x;
    z.y = m.y;
    z.x += x;
    z.y += y;
    return z;
}