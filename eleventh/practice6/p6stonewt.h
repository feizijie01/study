// stonewt.h definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include<iostream>
using namespace std;
class Stonewt
{   
    public:
    enum MODE{STN,LBS};    //注意要让此枚举放在 public
    private:
    enum{Lbs_per_stn = 14};   // pounds per stone
    int stone;    // whole stones
    MODE mode;
    int pds_left;   // fractional pounds
    double pounds;   // entire weight in pounds
    public:
    Stonewt(double lbs,MODE m=STN);  // constructor for double pounds
    Stonewt(int stn,double lbs,MODE m=STN); // constructor for stone, lbs
    Stonewt();  //default constructor
    ~Stonewt(){};
    Stonewt operator+(const Stonewt s);
    Stonewt operator-(const Stonewt s);
    Stonewt operator*(double n);
    friend ostream & operator<<(ostream & os,const Stonewt s1);
    void show_lbs()const;  //show weight in pounds format
    void show_stn()const; // show weight in stone format

};
#endif