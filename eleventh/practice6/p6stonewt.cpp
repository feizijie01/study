//stonewt.cpp -- Stonewt methods
#include"p6stonewt.h"
using std::cout;
using std::endl;
Stonewt::Stonewt(double lbs,MODE m)
{   
    mode=m;
    stone=int(lbs)/Lbs_per_stn;   
    pds_left=int(lbs+0.5)%Lbs_per_stn;
    //把剩余的磅数转化为整数，四舍五入   
    pounds=lbs;
}

Stonewt::Stonewt(int stn,double lbs,MODE m)
{   
    mode=m;
    stone=stn;
    pds_left=int(lbs+0.5);
    //把剩余的磅数转化为整数，四舍五入
    pounds=stone*Lbs_per_stn+lbs;
}

Stonewt::Stonewt()
{
    stone=0;
    pds_left=pounds=0;
}

ostream & operator<<(ostream & os,const Stonewt s1)
{   
    
    if(s1.mode == Stonewt::STN)
    {
        os << "Stone: " << s1.stone << endl;
        os << "Pounds left: " << s1.pds_left << endl;
        
    }
    else if(s1.mode == Stonewt::LBS)
    os << "Pounds: " << s1.pounds << endl;

    return os;
}

Stonewt Stonewt::operator+(const Stonewt s)
{
    return Stonewt(pounds+s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt s)
{
   return Stonewt(pounds-s.pounds);
}

Stonewt Stonewt::operator*(double n)
{
    return Stonewt(pounds*n);
}

