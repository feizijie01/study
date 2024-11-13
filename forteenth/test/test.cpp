#include"test.h"
#include<iostream>
#include<string>

using std::istream,std::string,std::endl;
istream & operator>>(istream & is, Jicheng & b1)
{
     is >> (string &)b1;
     return is;
}
istream & getline(istream & is, Jicheng & b1)
{
    getline(is,(string &)b1);
    return is;
}

ostream & operator<<(ostream & os,const Jicheng & b1)
{
    os << "Name: " << (const string &)b1 << endl;
    os << "Scores: " << endl;
    for(int i=0;i<Max;i++)
    {os <<b1[i];
    os << endl;}
    os << "Max: " << b1.max();
    os << "Min: " << b1.min();
    return os;
}