#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stdexcept>
using namespace std;
class Sales_item
{  
    private:
    string isbn;
    int volume;
    double price;
    
    public:
    Sales_item():isbn("nothing"),volume(0),price(0.0){}
    Sales_item(const Sales_item & s);
    Sales_item(Sales_item && s);
    string & ISBN(){return this->isbn;}
    friend istream & operator>>(istream & is,Sales_item & s);
    friend ostream & operator<<(ostream & os,Sales_item & s);
    Sales_item & operator=(const Sales_item & s);
    Sales_item & operator=(const Sales_item && s);
    Sales_item operator+(const Sales_item & s);
    Sales_item & operator+=(const Sales_item & s);
    ~Sales_item(){}
};

Sales_item::Sales_item(const Sales_item & s)
{
    isbn=s.isbn;
    volume=s.volume;
    price=s.price;
}

Sales_item::Sales_item(Sales_item && s)
{
    isbn=move(s.isbn);
    volume=s.volume;
    price=s.price;
}

istream & operator>>(istream & is,Sales_item & s)
{
    is >> s.isbn >> s.volume >> s.price;
    return is;
}

ostream & operator<<(ostream & os,Sales_item & s)
{
    os << s.isbn << " " << s.volume << " "
       << s.volume * s.price << " "
       << s.price;
    return os;
}

Sales_item& Sales_item::operator=(const Sales_item & s)
{
    this->isbn=s.isbn;
    this->volume=s.volume;
    this->price=s.price;
    return *this;
}

Sales_item & Sales_item::operator=(const Sales_item && s)
{
    this->isbn=move(s.isbn);
    this->volume=s.volume;
    this->price=s.price;
    return *this;
}

Sales_item Sales_item::operator+(const Sales_item & s)
{
    if(this->isbn!=s.isbn)
    {
        throw invalid_argument("isbn mismatch in +");
    }
    
        Sales_item s1;
        s1.isbn=move(s.isbn);
        s1.price=(this->price+s.price)/2;
        s1.volume=this->volume+s.volume;
        return s1;
    
}

Sales_item & Sales_item::operator+=(const Sales_item & s)
{
      if(this->isbn!=s.isbn)
    {
        throw invalid_argument("isbn mismatch in +=");
    }
     
    this->price=(this->price+s.price)/2;
    this->volume+=s.volume;
    return *this;
    
}