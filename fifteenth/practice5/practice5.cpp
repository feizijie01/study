#include"practice5.h"

Sales::bad_dex::bad_dex(int b1,const string & s):bi(b1),logic_error(s){}

Sales::Sales(int yy)
{
    year=yy;
    for(int i=0;i<MONTHS;i++)
    gross[i]=0;
}

Sales::Sales(int yy,const double * gr,int n)
{
    year=yy;
    int lim;
    int i=0;
    lim=n<MONTHS?n:MONTHS;
    for(;i<lim;i++)
    gross[i]=gr[i];
    for(;i<MONTHS;i++)
    gross[i]=0;
}

double Sales::operator[](int i)const
{
    if(i<0||i>=MONTHS)
    throw bad_dex(i);
    return gross[i];
}

double & Sales::operator[](int i)
{
    if(i<0 || i>=MONTHS)
    throw bad_dex(i);
    return gross[i];
}

LabeledSales::nbad_dex::nbad_dex(const string & s1,int i,const string & s)
:nlabel(s1),bad_dex(i,s){}

LabeledSales::LabeledSales(int yy,const string & label):Sales(yy),Llabel(label){}

LabeledSales::LabeledSales(int yy,const double * gr,int n,const string & label):
Sales(yy,gr,n),Llabel(label){}

double LabeledSales::operator[](int i)const
{
    if(i<0 || i>=MONTHS)
    throw nbad_dex(Label(),i);
    return Sales::operator[](i);
}

double & LabeledSales::operator[](int i)
{
    if(i<0 || i>=MONTHS)
    throw nbad_dex(Label(),i);
    return Sales::operator[](i);
}



