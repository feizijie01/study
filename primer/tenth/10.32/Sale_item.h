#include<iostream>
#include<string>
using namespace std;
class Sales_item
{
    private:
    string  ISBN;
    double  Sales;
    double  books;

    public:
    string isbn(){return  this->ISBN;}
    Sales_item(string s,double m,double n);
    Sales_item();
    friend ostream & operator<<(ostream & os,const Sales_item & s);
    friend istream & operator>>(istream & is,Sales_item & s);
    Sales_item & operator=(const Sales_item & s);
    Sales_item & operator+(const Sales_item & s);
    Sales_item & operator+=(const Sales_item & s);
    bool operator==(const Sales_item & s);
};

Sales_item::Sales_item()
{
    this->ISBN="nothing";
    this->Sales=0;
    this->books=0;
}

Sales_item::Sales_item(string s,double m,double n)
{
    this->ISBN=s;
    this->Sales=m;
    this->books=n;
}

ostream & operator<<(ostream & os,const Sales_item & s)
{
    os << "ISBN: " << s.ISBN << endl;
    os << "Sales: " << s.Sales << endl;
    os << "books: " << s.books << endl;
    return os;
}

istream & operator>>(istream & is,Sales_item & s)
{
    cout << "Please enter  Sales & books &ISBN: \n";
    is >> s.Sales >> s.books>>s.ISBN;
    return is;
}

Sales_item & Sales_item::operator=(const Sales_item & s)
{
    this->ISBN=s.ISBN;
    this->Sales=s.Sales;
    this->books=s.books;
    return *this;
}

Sales_item & Sales_item::operator+(const Sales_item & s)
{
    this->ISBN=s.ISBN;
    this->Sales=this->Sales+s.Sales;
    this->books=this->books+s.books;
    return *this;
}

Sales_item & Sales_item::operator+=(const Sales_item & s)
{
    return *this+s;
}

bool Sales_item::operator==(const Sales_item & s)
{
    return this->ISBN==s.ISBN;
}