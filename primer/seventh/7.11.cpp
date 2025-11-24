#include<iostream>
#include<string>
using namespace std;
struct Sale_data{
    Sale_data()=default;
    Sale_data(const string & s):bookNo(s){};
    Sale_data(const string & s,unsigned int n,double price)
    :bookNo(s),number(n),revenue(price*n){}
    Sale_data(istream & is)
    {
        read(is,*this);
    }
    string isbn()const {return bookNo;};
    istream & read(istream & is,Sale_data & s);
    
    Sale_data & combine(const Sale_data &);
    double avg_price()const;
    string bookNo;
    unsigned int number=0;
    double revenue=0;
};

ostream & printsale(ostream & os,const Sale_data & s)
{   
    double price =s.revenue/s.number;
    os << s.bookNo <<" "<< s.number << " " << s.revenue
         << " " << price;
    return os;
}

int main()
{
    Sale_data s0;
    Sale_data s1("aaaaa");
    Sale_data s2("bbbbb",100,1.2);
    Sale_data s3(cin);
    cout << "s0: "; 
    printsale(cout,s0)<< endl;
    cout << "s1: "; 
    printsale(cout,s1)<< endl;
    cout << "s2: "; 
    printsale(cout,s2)<< endl;
    cout << "s3: "; 
    printsale(cout,s3)<< endl;




    cin.get();
    cin.get();
    return 0;
}



istream & Sale_data::read(istream & is,Sale_data & s)
{
    is >> s.bookNo >> s.number >> s.revenue;
    return is;
}