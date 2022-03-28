#ifndef G11L4_H_
#define G11L4_H_
#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);
    friend Time operator*(double n, const Time & t) {return t * n;}
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
    friend Time operator+(const Time & t1, const Time & t2);
    friend Time operator-(const Time & t1, const Time & t2);
    friend Time operator*(const Time & t, double n);
};

#endif