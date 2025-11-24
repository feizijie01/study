#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    
    string isbn()const{return this->bookNo;}
    Sales_data & combine(const Sales_data & s);
};

Sales_data & Sales_data::combine(const Sales_data & s)
{
    units_sold += s.units_sold;
    revenue += s.revenue;
    return * this;
}