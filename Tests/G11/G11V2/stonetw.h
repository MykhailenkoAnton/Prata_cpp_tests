#ifndef STONETW_H_
#define STONETW_H_

class Stonetw
{
private:
    enum {Lbs_per_stn = 14}; // фунтов на стоун
    int stone;  // полных стоунов
    double pds_left; // дробное число фунтов
    double pounds; // общий вес в фунтах
public:
   Stonetw(double lbs); // конструктор для значения в фунтах
   Stonetw(int stb, double lbs); // конструктор для значения в стоунах и фунтах
   Stonetw(); // конструктор по умолчанию
   ~Stonetw();
   void Show_lbs() const; // отображение веса в формате фунтов
   void Show_stn() const; // отображение веса в формате стоунов 
};
#endif
