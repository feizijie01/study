// stock20.h -- augemented version
#ifndef P3STOCK20_H_
#define P3STOCK20_H_
#include<iostream>

class Pstock
{   
    private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot(){total_val=shares*share_val;}
    public:
    Pstock();
    Pstock(const char * p,long n=0,double pr=0.0);
    ~Pstock();
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    friend std::ostream & operator<<(std::ostream & os,const Pstock & p1);
    const Pstock & topval(const Pstock &s) const;
};

#endif