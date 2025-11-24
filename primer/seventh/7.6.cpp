#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
    string bookNo;
    unsigned int number;
    double revenue;
    const string & isbn()const{return this->bookNo;}
    Sales_data & combine(const Sales_data & s);
};


Sales_data & Sales_data::combine(const Sales_data & s)
{   
    this->number+=s.number;
    this->revenue+=s.revenue;
    return *this;
}

Sales_data & addsale(Sales_data & s1,const Sales_data & s2)
{ 
    s1.number+=s2.number;
    s1.revenue+=s2.revenue;
    return s1;
}

istream & readsale(istream & is ,Sales_data & s)
{   
    cout << "Enter the sale date: ";
    is >> s.bookNo >> s.number >> s.revenue;
    return is;
}

ostream & printsale(ostream & os,const Sales_data & s)
{   
    double price =s.revenue/s.number;
    os << s.bookNo <<" "<< s.number << " " << s.revenue
         << " " << price;
    return os;
}

int main()
{   
    Sales_data s1;
    readsale(cin,s1);
    if(s1.bookNo[0]=='0')
    cout << "Nothing.\n";
    else
    {
        Sales_data total;
        total=s1;
       
        while (readsale(cin,s1))
        {   
            if(s1.bookNo[0] =='0')
            break;
            
            if(total.isbn()==s1.isbn())
            total.combine(s1);
            else
            {
               printsale(cout,total);
               cout << endl;
               total=s1;
            }
        }
        printsale(cout,total);
        cout << endl;

    }
        
   
    
    cin.get();
    cin.get();
    return 0;
}