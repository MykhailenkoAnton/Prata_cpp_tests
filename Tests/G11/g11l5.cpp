#include <iostream>
#include "g11l5.h"

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
}
Stonewt::~Stonewt()
{

}
Stonewt::Stonewt(double lbs, Mode form)
{
    switch (form)
    {
    case Mode::STN:
        stone = lbs;
        break;
    
    default:
        break;
    }
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    
}
std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    os <<
}