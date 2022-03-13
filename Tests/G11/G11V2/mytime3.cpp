#include "mytime3.h"
#include <iostream>

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
void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time Time::operator-(const Time & t) const
{
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + t.hours * 60;
    tot2 = minutes + hours * 60;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}
Time Time::operator*(double mult) const
{
    Time rezult;
    long totalminutes = hours * mult * 60 + minutes * mult;
    rezult.minutes = totalminutes % 60;
    rezult.hours = totalminutes / 60;
    return rezult;
}
std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes!";
    return os;
}