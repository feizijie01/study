#include<iostream>
#include"p6stonewt.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    Stonewt s1(1,2,Stonewt::STN);
    Stonewt s2(3.3,Stonewt::LBS);
    Stonewt s3=s1+s2;
    Stonewt s4=s1-s2;
    Stonewt s5=s1*1.5;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cin.get();
    return 0;
}