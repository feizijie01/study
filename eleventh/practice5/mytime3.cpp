// mytime3.cpp -- implementing Time methods
#include"mytime3.h"

Time::Time()
{
    hours = minutes =0;
}

Time::Time(int h,int m)
{
    hours = h+m/60;
    minutes = m%60;
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

Time operator+(const Time&t1,const Time & t2)
{   
   
    return Time(t1.hours+t2.hours,t1.minutes+t2.minutes);
}

Time operator-(const Time&t1,const Time & t2)
{
    Time diff;
    int totl1,totl2;
    totl1=t1.hours*60+t1.minutes;
    totl2=t2.hours*60+t2.minutes;
    diff.minutes=(totl2-totl1)%60;
    diff.hours=(totl2-totl1)/60;
    return diff;
}

Time operator*(double m,const Time & t)
{
  Time result;
  long totalmin=t.hours*m*60+t.minutes*m;
  result.hours=totalmin/60;
  result.minutes=totalmin%60;
  return result;
}

Time operator*(const Time & t,double m)
{
  return m*t;
}

std::ostream & operator<<(std::ostream&os,const Time&t)
{
    os << t.hours << "hours, " << t.minutes << " minutes.";
    return os;
}