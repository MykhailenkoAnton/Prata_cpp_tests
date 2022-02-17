#ifndef TIME2_H_
#define TIME2_H_
#include <iostream>

class Time2
{
private:
    int hours;
    int minutes;
public:
    Time2();
    Time2(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time2 operator+(const Time2 & t) const;
    Time2 operator-(const Time2 & t) const;
    Time2 operator*(double m) const;
    friend Time2 operator*(double m, const Time2 & t);
    friend std::ostream & operator<<(std::ostream & os, const Time2 & t);
};

#endif