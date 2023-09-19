//strctptr.cpp -- functions with pointer to structure arguments
#include<iostream>
#include<cmath>
using namespace std;
// structure templates
struct polar
{
    double distance; // distance from origin
    double angle;   // angle from origin
};

struct rect
{
    double x;  // horizontal distance from origin
    double y; // vetical distance from origin
};

// prototyps
void change(const rect* pz,polar*pj);
void show(const polar*pj);

int main()
{
rect zhijiao;

polar jizuo;

cout << "Please enter two number in zhijiaozuobiao x and y(q to quit): ";
while(1>0)
 {
   if(cin >> zhijiao.x >> zhijiao.y)
    {
      change(&zhijiao,&jizuo);
      show(&jizuo);
      cout << "Another two numbers: ";
    continue;
    }
   else
    {
     cin.clear();
     if(cin.get()=='q')
     break;
     while(cin.get()!='\n')
     continue;
     cout << "Please enter in double: ";
    }
 }  

cout << "Done." << endl;
cin.get();
cin.get();
return 0;
}
void change(const rect*pz,polar* pj)
{
 
  const double Rad_to_deg=57.29577951;
  pj->distance=sqrt(pz->x*pz->x+pz->y*pz->y);
  pj->angle=atan2(pz->y,pz->x)*Rad_to_deg;
}
void show(const polar*pj)
{
    cout << "The distance is: " << pj->distance << endl;
    cout << "The angle is: " << pj->angle << " degree." << endl;
}