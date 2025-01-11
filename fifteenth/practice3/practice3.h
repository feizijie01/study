#ifndef PRACTICE3_H_
#define PRACTICE3_H_
#include<iostream>
#include<stdexcept>
using std::cout,std::cin,std::endl,std::logic_error;

class jilei:public logic_error
{
    private:
    double a;
    double b;

    public:
    jilei(double a1=0,double b1=0,const char * p="None"):a(a1),b(b1),logic_error(p){}
    double reportA(){return a;}
    double reportB(){return b;}
    virtual void what(){}
};

class bad_hmean:public jilei
{
    public:
    bad_hmean(double a1=0,double b1=0,const char * p="None"):jilei(a1,b1,p){}
    void report(){cout << "hmean() invaild argument: "<< reportA() << " , " << reportB() << endl;}
};

class bad_gmean:public jilei
{
    public:
    bad_gmean(double a1=0,double b1=0,const char * p="None"):jilei(a1,b1,p){}
    void report(){cout << "gmean() invaild argument: "<< reportA() << " , " << reportB() << endl;}
};

#endif