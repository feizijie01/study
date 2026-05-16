#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Sales_data
{
    string bookNo;
    unsigned units_sold=0;
    double revenue=0.0;
    ifstream & read(ifstream & fin,Sales_data & s);
    ostream & print(ostream & os , Sales_data & s);
    string isbn()const{return this->bookNo;}
    Sales_data & combine(const Sales_data & s);
};

Sales_data & Sales_data::combine(const Sales_data & s)
{
    units_sold += s.units_sold;
    revenue += s.revenue;
    return * this;
}

ifstream & read(ifstream & fin,Sales_data & s)
{   
    double price;
    fin >> s.bookNo >> s.units_sold >> price;
    s.revenue=price*s.units_sold;
    return fin;
}

ostream & print(ostream & os , Sales_data & s)
{
    os << "BookNo: " << s.bookNo << endl;
    os << "Sold_volume: " << s.units_sold << endl;
    os << "Revenue: " << s.revenue << endl;
    os << endl;
    return os;
}


