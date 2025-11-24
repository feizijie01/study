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
    istream & read(istream & is,Sale_data & s)
    {
        is >> s.bookNo >> s.number >> s.revenue;
        return is;
    }
    
    Sale_data & combine(const Sale_data & s)
    {   
        this->number+=s.number;
        this->revenue+=s.revenue;
        return *this;
    }
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
    
    if(cin)
    {   
        Sale_data total(cin);
        
        {
            while(cin)
            {   
                Sale_data trans(cin);
                if(trans.bookNo[0]='0')
                break;
                if(trans.isbn()==total.isbn())
                total.combine(trans);
                else
                {
                    printsale(cout,total);
                    total=trans;
                }
            }
            printsale(cout,total);
        }
    }
    if(!cin)
    {   
        cin.clear();
        while(cin.get()!='\n')
        continue;
        cerr << "\nNothing.\n";
    }
    
    cin.get();
    cin.get();
    return 0;
}