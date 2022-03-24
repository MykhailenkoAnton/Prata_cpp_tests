#include <iostream>
#include "swonet1.h"

// Конструирует объект Stonewt из значения типа double
Swonet1::Swonet1(double lbs)
{
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}
// Конструирует объект Stonewt из стоунов и значения типа double
Swonet1::Swonet1(int stb, double lbs)
{
    stone = stb;
    pds_left = lbs;
    pounds = stb * Lbs_per_stn + lbs;
}
// конструктор по умолчанию
Swonet1::Swonet1()
{
    stone = pds_left = pounds = 0;
}
// деструктор
Swonet1::~Swonet1()
{

}
// Отображение веса в стоунах
void Swonet1::show_stn() const
{
    std::cout << stone << " stone, " << pds_left << " pounds\n";
}
// Отображение веса в фунтах
void Swonet1::show_lbs() const
{
    std::cout << pounds << " pounds\n";
}
Swonet1::operator int() const
{
    return int (pounds + 0.5);
}
Swonet1::operator double() const
{
    return pounds;
}