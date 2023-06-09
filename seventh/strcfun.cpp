//strcfun.cpp -- functions with a structure argument
#include<iostream>
#include<cmath>
using namespace std;
//structure declarations
struct polar
{
    double distance;  //distance from origin
    double angle;  // irection from origin

};
struct rect
{
    double x;    // horizontal distance from origin
    double y;  // vertical distance from origin
};

// prtotypes

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
  rect rplace;
  polar pplace;

  cout << "Enter the x and y values: ";
  while(cin >> rplace.x >> rplace.y)  // slick use of cin
  {
    pplace = rect_to_polar(rplace);
    show_polar(pplace);
    cout << "Next two numbers(q to quit): ";
  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  return 0;
}

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    polar answer;

    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);
    return answer;  // returns a polar structure
}

void show_polar(polar dapos)
{
    const double Rad_to_deg=57.29577951;
    cout << "distance = " << dapos.distance;
    cout << "angle = " << dapos.angle* Rad_to_deg;
    cout << " degrees\n";
}