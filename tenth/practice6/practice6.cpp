#include<iostream>
#include"practice6.h"
using std::cout;
using std::cin;
using std::endl;
Move::Move(double a,double b)
{
    x=a;
    y=b;
}
Move Move::add(const Move & m)const
{
   Move m1;
   m1.x=this->x+m.x;
   m1.y=this->y+m.y;
   return m1;
}

void Move::showMove() const
{
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}

void Move::reset(double a,double b)
{
    x=a;
    y=b;
}