#include <iostream>
#include "stonetw.h"
// Конструирует объект Stonewt из значения типа double
Stonetw::Stonetw(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
// Конструирует объект Stonewt из стоунов и значения типа double
Stonetw::Stonetw(int stb, double lbs)
{
    stone = stb;
    pds_left = lbs;
    pounds = stb * Lbs_per_stn + lbs;
}
// конструктор по умолчанию
Stonetw::Stonetw()
{
    stone = pds_left = pounds = 0;
}
// деструктор
Stonetw::~Stonetw()
{

}
// Отображение веса в стоунах
void Stonetw::Show_stn() const
{
    std::cout << stone << " stone, " << pds_left << " pounds\n";
}
// Отображение веса в фунтах
void Stonetw::Show_lbs() const
{
    std::cout << pounds << " pounds\n";
}
