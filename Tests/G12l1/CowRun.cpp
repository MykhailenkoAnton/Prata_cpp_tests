#include <iostream>
#include "Cow.h"

int main() 
{
    Cow moo;
    moo.ShowCow();
    Cow moo2("COW2", "NON2", 35);
    moo2.ShowCow();
    Cow moo3;
    moo3 = moo2;
    moo3.ShowCow();
    Cow moo5("XXX", "HHH", 50);
    Cow moo4 = moo5;
    moo4.ShowCow();
    return 0;
}