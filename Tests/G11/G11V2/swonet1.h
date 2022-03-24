#ifndef SWONET1_H_
#define SWONET1_H_

class Swonet1
{
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
public:
    Swonet1(double lbs);
    Swonet1(int stn, double lbs);
    Swonet1();
    ~Swonet1();
    void show_lbs() const;
    void show_stn() const;
    // Функции преобразования
    operator int() const;
    operator double() const;
};
#endif