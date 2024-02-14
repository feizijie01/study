//stonewt.cpp -- Stonewt methods
#include"p7stonewt.h"
#include<iostream>
using std::cout;
using std::endl;
Stonewt::Stonewt(double lbs)
{
    stone=int(lbs)/Lbs_per_stn;   
    pounds=lbs;
    pds_left=int(lbs)%Lbs_per_stn+lbs-int(lbs);
}

Stonewt::Stonewt(int stn,double lbs)
{
    stone=stn;
    pds_left=lbs;
    pounds=stone*Lbs_per_stn+lbs;
}

Stonewt::Stonewt()
{
    stone=0;
    pds_left=pounds=0;
}

void Stonewt::show_stn()const
{
    cout << "The weight is " << stone << " stone and " << pds_left << " pounds." << endl;
}

void Stonewt::show_lbs()const
{
    cout << "The weight is " << pounds << " pounds." << endl;
}

bool Stonewt::operator>(const Stonewt s)
{
    return (pounds>s.pounds);
}

bool Stonewt::operator<(const Stonewt s)
{
    return (pounds<s.pounds);
}

bool Stonewt::operator>=(const Stonewt s)
{
    return (pounds>=s.pounds);
}

bool Stonewt::operator<=(const Stonewt s)
{
    return (pounds<=s.pounds);
}

bool Stonewt::operator==(const Stonewt s)
{
    return (pounds==s.pounds);
}

bool Stonewt::operator!=(const Stonewt s)
{
    return (pounds!=s.pounds);
}
