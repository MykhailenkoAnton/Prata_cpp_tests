#ifndef G11L6_H_
#define G11L6_H_

class Stonewt
{
private:
    enum {Lbs_per_stn = 14}; // фунтов на стоун
    int stone; // полных стоунов
    double pds_left; // полных стоунов
    double pounds; // общий вес в фунтах
public:
    Stonewt(double lbs); // конструктор для значения в фунтах
    Stonewt(int str, double lbs); // конструктор для значения в стоунах и фунтах
    Stonewt(); // конструктор по умолчанию
    ~Stonewt();
    void Show_lbs() const; // отображение веса в формате фунтов
    void Show_str() const; // отображение веса в формате стоунов
    
};

#endif