#ifndef WINC_H_
#define WINC_H_
#include<iostream>
#include<cstring>
#include <valarray>
using std::string;
typedef std::valarray<int>ArrayInt;

class PairArray
{
    private:
    ArrayInt years;
    ArrayInt bottles;
    int year1;

    public:
    PairArray(){}
    PairArray(const int a1[],const int b1[],int n):year1(n),years(a1,n),bottles(b1,n){}
    PairArray(int n):years(n),bottles(n),year1(n){};
    int count(){return bottles.sum();};
    int & ReportYears(int n){return years[n];}
    int & ReportBottles(int n){return bottles[n];}
};

class Wine
{
    private:
    string name;
    int year;
    PairArray yb;

    public:
    Wine(const char *l,int y,const int yr[],const int bot[])
    :name(l),year(y),yb(yr,bot,y){}
    Wine(const char *l,int y):name(l),year(y),yb(y){}
    void Show();
    void GetBottles();
    int sum(){return yb.count();}
    string & Label(){return name;}

};

#endif