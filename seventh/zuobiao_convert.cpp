#include<cmath>
#include<iostream>
using namespace std;
const double rad_to_deg =57.29577951;
struct polar
{
    double angle;
    double distance;
};
struct rect
{
    double x;
    double y;
};
polar change(rect);
void show(polar);
int main()
{
    rect zhijiao;
    polar jizb;
    char a,b;
    cout << "Please enter the x and y in rectangular coordinates: " << endl;
    while(1>0)
    {
      if(cin >> zhijiao.x>> zhijiao.y)
      {
        cout << zhijiao.x << "   " << zhijiao.y << endl;
        show(change(zhijiao));
        cout << "Please enter another two numbers: ";
        continue;
      }
      else 
      {cin.clear();
      if (cin.get()=='q')
       break;
      cout << "it is wrong input." << endl;}
      
      while(cin.get()!='\n')
      continue;
      cout << "Please enter the x and y in double: ";
      
    };
    cout << "Done." << endl;
    cin.get();
    cin.get();
    
    return 0;
}
polar change(rect zhi)
{
    polar jizb;
    jizb.distance=sqrt(zhi.x*zhi.x+zhi.y*zhi.y);
    jizb.angle=atan2(zhi.y,zhi.x)*rad_to_deg;
    return jizb;
}
void show(polar jizb)
{
    cout << "distance = " << jizb.distance << endl;
    cout << "angle = " << jizb.angle << "degrees\n";
}