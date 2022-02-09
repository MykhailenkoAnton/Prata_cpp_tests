#include <iostream>
#include "move.h"
int main()
{
    move M1(10.0, 20.0);
    M1.showmove();
    move M2(20.0, 10.0);
    M2.showmove();
    move M3 = M1.add(M2);
    M3.showmove();
    M2.reset();
    M2.showmove();
    M2 = M3.add(M1);
    M2.showmove();
    return 0;
}