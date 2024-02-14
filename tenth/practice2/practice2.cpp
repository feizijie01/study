#include<iostream>
#include"practice2.h"
#include<cstring>
using std::cout;
using std::endl;
Person::Person(const string & ln,const char*fn)
{
  lname=ln;
  strncpy(fname,fn,25);
}
void Person::show() const
{
    cout << fname << " " << lname;
    cout << endl;
}
void Person::FormalShow() const
{
    cout << lname << " " <<fname;
    cout << endl;
}