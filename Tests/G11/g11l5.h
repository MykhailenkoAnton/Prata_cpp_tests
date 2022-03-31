#ifndef G11l5_H_
#define G11l5_H_
#include <iostream>
class Stonewt
{
public:
    enum Mode {STON, FUNTS};
private:
    Mode mode;
    enum {Lbs_per_stn = 14}; // фунтов на стоун
    int stone; // полных стоунов
    double pds_left; // дробное число фунтов
    double pounds; // общий вес в фунтах
public:
    Stonewt(double lbs, Mode form = FUNTS); // конструктор для значения в фунтах
    Stonewt(int stn, double lbs, Mode form = FUNTS); // конструктор для значения в стоунах и фунтах
    ~Stonewt(); // конструктор по умолчанию
    Stonewt();
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double n) const;
    void stone_mode();
    void pounds_mode();
    friend Stonewt operator*(double n, const Stonewt & st);
};



#endif