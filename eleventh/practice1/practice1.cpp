#include"practice1.h"
#include<iostream>
using std::cout;
StoneAndPounds::StoneAndPounds(double n)
{
    pounds=n;
    stone=n/pounds_per_stone;
    yupounds=n-stone*pounds_per_stone;
}

StoneAndPounds::StoneAndPounds(int x,double y)
{
    stone=x;
    yupounds=y;
    pounds=x*pounds_per_stone+y;
}

void StoneAndPounds::show()const
{
   cout << pounds << " pounds.\n";
   cout << " or ";
   cout << stone << " stone and " << yupounds << " pounds.\n";
}

StoneAndPounds StoneAndPounds::operator*(double n)   
{

  return (StoneAndPounds(pounds * n));
}

StoneAndPounds operator*(double n,StoneAndPounds & s1)
{
  return (StoneAndPounds(s1.pounds*n));
}   