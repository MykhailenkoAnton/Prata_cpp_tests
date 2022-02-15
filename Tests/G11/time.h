#ifndef TIME_H_
#define TIME_H_

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
    Time Sum(const Time & t) const;
    void Show() const;
};


#endif