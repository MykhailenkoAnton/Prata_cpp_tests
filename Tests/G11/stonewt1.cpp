#include <iostream>
#include "stonewt1.h"
// Конструирует объект Stonewt из значения типа double
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
// Конструирует объект Stonewt из стоунов и значения типа double
Stonewt::Stonewt(int str, double lbs)
{
    stone = str;
    pds_left = lbs;
    pounds = str * Lbs_per_stn + lbs;
}
Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}
Stonewt::~Stonewt()
{

}
// Отображение веса в стоунах
void Stonewt::Show_str() const
{
    std::cout << stone << " stone, " << pds_left << " pounds\n";
}
void Stonewt::Show_lbs() const
{
    std::cout << pounds << " pounds\n";
}
Stonewt::operator int() const
{
    return int (pounds + 0.5);
}
Stonewt::operator double() const
{
    return pounds;
}