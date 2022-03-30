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
    mode = form;
    if (form == Stonewt::FUNTS)
    {
        stone = int(lbs) / Lbs_per_stn;
        pounds = lbs;
        pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    }
    else if (form == Stonewt::STON)
    {
        stone = int (lbs) / Lbs_per_stn;
        pounds = lbs;
        pds_left = int(lbs) % Lbs_per_stn;
    }
}
Stonewt::Stonewt(int stn, double lbs, Mode form)
{
    mode = form;
    if (form == Stonewt::STON)
    {
        stone = stn;
        pounds = lbs;
        pds_left = stn * Lbs_per_stn + lbs;
    }
    else if (form == Stonewt::FUNTS)
    {
        stone = int(lbs) / Lbs_per_stn;
        pounds = lbs;
        pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    }
    
    
}
std::ostream & operator<<(std::ostream & os, const Stonewt & st)
{
    if (st.mode == Stonewt::FUNTS)
    {
        os << "pounds = " << st.pounds << std::endl;
    }
    else if (st.mode == Stonewt::STON)
    {
        os << "Stone = " << st.stone << std::endl;
    }
    else
    {
        os << "Error!";
    }
    return os;
}