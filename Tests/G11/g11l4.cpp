#include <iostream>
#include "g11l4.h"

Time::Time()
{
    hours = minutes = 0;
}
Time::Time(int h, int m)
{   
    hours = h;
    minutes = m;
}
void Time::addMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::addHr(int h)
{
    hours += h;
}
void Time::reset(int h, int m)
{
    hours = h;
    minutes = m;
}
Time operator+(const Time & t1, const Time & t2)
{
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time operator-(const Time & t1, const Time & t2)
{
    Time diff;
    int tot1, tot2;
    tot1 = t1.minutes + 60 * t1.hours;
    tot2 = t2.minutes + 60 * t2.hours;
    diff.minutes = (tot1 - tot2) % 60;
    diff.hours = (tot1 - tot2) / 60;
    return diff;
}
Time operator*(const Time & t, double n)
{
    Time rezult;
    long totalminutes = t.hours * n * 60 + t.minutes * n;
    rezult.hours = totalminutes / 60;
    rezult.minutes = totalminutes % 60;
    return rezult;
}
std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}