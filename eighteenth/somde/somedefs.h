#ifndef SOMEDEFS_H_
#define SOMEDEFS_H_
#include<iostream>
using namespace std;
template<typename T,typename F>
T use_f(T v,F f)
{
    static int count=0;
    count++;
    cout << "count = " << count << endl;
    cout << "&count = " << &count << endl;
    return f(v);
}

class Fp
{
    private:
    double z_;
    public:
    Fp(double z=1.0):z_(z){}
    double operator()(double p){return z_*p;}
};

class Fq
{
    private:
    double z_;
    public:
    Fq(double z=1.0):z_(z){}
    double operator()(double q){return z_ + q;}
};

#endif