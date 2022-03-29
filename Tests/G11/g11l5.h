#ifndef G11l5_H_
#define G11l5_H_
#include <iostream>
class Stonewt
{
private:
    enum Mode {STN, F_INT, F_DOUBLE};
    enum {Lbs_per_stn = 14}; // фунтов на стоун
    int stone; // полных стоунов
    double pds_left; // дробное число фунтов
    double pounds; // общий вес в фунтах
public:
    Stonewt(double lbs, Mode form = STN); // конструктор для значения в фунтах
    ~Stonewt();
    Stonewt();
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double n) const;
};



#endif