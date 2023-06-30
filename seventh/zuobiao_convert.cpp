#include<iostream>
#include<cmath>
using namespace std;
struct rect
{
    double x;
    double y;
};
struct polar
{
    double distance;
    double angle;
};

void show_polar(polar);
polar convert_rect_to_polar(rect);

int main()
{   
    double x,y;
    cout << "Please enter two number(q to quit): ";
    cin >> x >> y;
    do
    { 
      if(!cin)
      {
      cin.clear();
      if(cin.get()=='q')
      break;
      while(cin.get()!='\n')
      continue;
      cout << "Please enter two number(q to quit): ";
      cin >> x>>y;
      }
  
      rect rectxi;
      rectxi.x=x;
      rectxi.y=y;
     polar polarxi=convert_rect_to_polar(rectxi);
     show_polar(polarxi);
     cout << endl;
     cout << "Next two number: ";
     cin >> x>>y;
    }while(cin.get()!='q');
     
    cout << "Bye.";
    cin.get();
    cin.get();
    return 0;
}
    polar convert_rect_to_polar(rect rectsi)
   {
     polar polarsi;
     polarsi.distance=sqrt(rectsi.x*rectsi.x+rectsi.y*rectsi.y);
     polarsi.angle=atan2(rectsi.y,rectsi.x);
     return polarsi;
   }
   
   void show_polar(polar polarsi)
   {
     cout << "The polar distance is :" << polarsi.distance  << endl;
     cout << "The polar angle is : " << polarsi.angle*57.29577951 << "degrees." << endl;
   }