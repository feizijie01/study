//file.cpp -- contains function called in file1.cpp
#include<iostream>
#include<cmath>
#include"coordin.h"  //structure template, function prototypes

// convert rectangular to polar coordinates
polar rect_to_polar(rect xypos)
{
    polar answer;

    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle = atan2(xypos.y,xypos.x);
    return answer;   //returns a polar structure
}

// show polar coordinates, converting angle to degrees
void show_polar(polar dapos)
{
    using std::cout;
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle*Rad_to_deg;
    cout << "degrees\n";
}
