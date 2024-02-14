// mytime3.cpp -- implementing Time methods
#include"mytime3.h"

Time::Time()
{
    hours = minutes =0;
}

Time::Time(int h,int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes=m;
    hours = minutes/60;
    minutes%=60;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::Reset(int h, int m)
{
    hours=h;
    minutes =m;
}

Time Time::operator+(const Time&t)const
{   
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hours=sum.minutes/60+hours+t.hours;
    sum.minutes=sum.minutes%60;
    return sum;
}

Time Time::operator-(const Time&t)const
{
    Time diff;
    int totl1,totl2;
    totl1=t.hours*60+t.minutes;
    totl2=hours*60+minutes;
    diff.minutes=(totl2-totl1)%60;
    diff.hours=(totl2-totl1)/60;
    return diff;
}

Time Time::operator*(double m)const
{
  Time result;
  long totalmin=hours*m*60+minutes*m;
  result.hours=totalmin/60;
  result.minutes=totalmin%60;
  return result;
}

std::ostream & operator<<(std::ostream&os,const Time&t)
{
    os << t.hours << "hours, " << t.minutes << " minutes.";
    return os;
}