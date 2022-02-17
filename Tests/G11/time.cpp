#include <iostream>
#include "time.h"

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
void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes";
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
    int totl, tot2;
    totl = t.minutes + 60 * t. hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - totl) % 60;
    diff.hours = (tot2 - totl) / 60;
    return diff;
}
Time Time::operator*(double n)
{
    Time rezult;
    long totalminutes = hours * n * 60 + minutes * n;
    rezult.hours = totalminutes / 60;
    rezult.minutes = totalminutes % 60;
    return rezult;
}
Time operator*(double m, const Time & t)
{
    Time rezult;
    long totalminutes = t.hours * m * 60 + t.minutes * m;
    rezult.hours = totalminutes / 60;
    rezult.minutes = totalminutes % 60;
    return rezult;
}
// void operator<<(std::ostream & os, const Time & t)
// {
//     os << t.hours << " hours, " << t.minutes << " minutes!\n";
// }
std::ostream & operator<<(std::ostream & os, const Time & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes!";
    return os;
}