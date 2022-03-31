#include <iostream>
#include "g11l5.h"

Stonewt::Stonewt()
{
    stone = pds_left = pounds = 0;
    mode = FUNTS;
}
Stonewt::~Stonewt()
{

}
Stonewt::Stonewt(double lbs, Mode form)
{
    mode = form;
    if (form == Stonewt::FUNTS)
    {
        stone = int(lbs) / Lbs_per_stn;
        pounds = lbs;
        pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    }
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    // mode = STON;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = STON;
    
}
std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    if (st.mode == Stonewt::FUNTS)
    {
        os << "pounds = " << st.pounds << std::endl;
    }
    else if (st.mode == Stonewt::STON)
    {
        os << "Stone = " << st.stone << "pounds = " << st.pds_left << std::endl;
    }
    else
    {
        os << "Error!";
    }
    return os;
}
void Stonewt::stone_mode()
{
    mode = STON;
}
void Stonewt::pounds_mode()
{
    mode = FUNTS;
}
Stonewt Stonewt::operator+(const Stonewt & st) const
{
    Stonewt sum;
    sum.pounds = st.pounds + this->pounds;
    sum.stone = int (sum.pounds) / Lbs_per_stn;
    sum.pds_left = 
    return sum;
}