#ifndef PRACTICE5_H_
#define PRACTICE5_H_
#include<stdexcept>
#include<iostream>
#include<string>
#include<typeinfo>
using std::string,std::cin,std::cout,std::endl;

class Sales
{
    public:
    enum{MONTHS=12};
    class bad_dex:public std::logic_error
    {
        private:
        int bi;
        public:
        explicit bad_dex(int bi=0,const string & s="Error in Sales project.");
        int bi_value(){return bi;}
        ~bad_dex()throw(){}
    };
    explicit Sales(int yy=0);
    Sales(int yy,const double * dr,int n);
    int Year(){return year;}
    virtual double operator[](int i)const;
    virtual double & operator[](int i);
    virtual ~Sales(){}

    private:
    int year;
    double gross[MONTHS];
};

class LabeledSales:public Sales
{
    public:
    class nbad_dex:public Sales::bad_dex
    {
        private:
        string nlabel;
        public:
        explicit nbad_dex(const string & s1,int b,const string & s="Error in LabeledSales project.");
        const string & BadLabel(){return nlabel;} 
        ~nbad_dex()throw(){}
    };
    virtual ~LabeledSales(){}
    explicit LabeledSales(int yy,const string & label="none.");
    LabeledSales(int yy,const double * gr,int n,const string & label);
    double operator[](int i)const;
    double & operator[](int i);
    const string & Label()const {return Llabel;}
    private:
    string Llabel;
};

#endif