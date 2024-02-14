//mytime2.cpp -- implementing Time methods
#include<iostream>
#include"mytime2.h"

Time::Time()
{
    hours = minutes =0;
}

Time::Time(int h,int m)
{
    hours=h;
    minutes=m;
}

void Time::AddHr(int h)
{
    hours+=h;
}

void Time::AddMin(int m)
{
    minutes+=m;
    hours += minutes/60;
    minutes%=60;
}

void Time::Reset(int h,int m)
{
    hours=h;
    minutes=m;
}

Time Time::operator+(const Time & t) const
{
    Time sum;
    sum.minutes=minutes+t.minutes;
    sum.hours = hours +t.hours+sum.minutes/60;
    sum.minutes%=60;
    return sum;
}

Time Time::operator-(const Time & t) const
{   
    Time diff;
    int totl1,totl2;
    totl1=t.hours*60+t.minutes;
    totl2=hours*60+minutes;
    diff.hours=(totl2-totl1)/60;
    diff.minutes=(totl2-totl1)%60;
    return diff;
}

Time Time::operator*(double mult) const
{
    Time result;
    long totalminutes=hours*mult*60+minutes*mult;
    result.hours=totalminutes/60;
    result.minutes=totalminutes%60;
    return result;
}

void Time::Show() const
{
    std::cout << hours << " hours, " << minutes << " minutes.";
}