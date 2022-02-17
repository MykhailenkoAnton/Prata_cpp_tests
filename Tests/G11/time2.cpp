#include "time2.h"
Time2::Time2()
{
    hours = minutes = 0;
}
Time2::Time2(int h, int m)
{
    hours = h;
    minutes = m;
}
void Time2::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time2::AddHr(int h)
{
    hours += h;
}
void Time2::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
Time2 Time2::operator+(const Time2 & t) const
{
    Time2 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time2 Time2::operator-(const Time2 & t) const
{
    Time2 diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}
Time2 Time2::operator*(double m) const
{
    Time2 rezult;
    long totalminutes = hours * m * 60 + minutes * m;
    rezult.hours = totalminutes / 60;
    rezult.minutes = totalminutes % 60;
    return rezult;
}
Time2 operator*(double m, const Time2 & t)
{
    return t * m;
}
std::ostream & operator<<(std::ostream & os, const Time2 & t)
{
    os << t.hours << " hours, " << t.minutes << " minutes!";
    return os;
}