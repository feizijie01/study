#include<iostream>
#include<string>
using namespace std;
class Sale_data{
    friend  string isbn(Sale_data & s){return s.bookNo;};
    friend ostream & printsale(ostream & os,const Sale_data & s)
{   
    double price =s.revenue/s.number;
    os << s.bookNo <<" "<< s.number << " " << s.revenue
         << " " << price;
    return os;
}
    friend istream & read(istream & is,Sale_data & s)
    {
        is >> s.bookNo >> s.number >> s.revenue;
        return is;
    }
    
    friend Sale_data & combine(Sale_data & s0, const Sale_data & s)
    {   
        s0.number+=s.number;
        s0.revenue+=s.revenue;
        return s0;
    }
    public:
    Sale_data()=default;
    Sale_data(const string & s):bookNo(s){};
    Sale_data(const string & s,unsigned int n,double price)
    :bookNo(s),number(n),revenue(price*n){}
    Sale_data(istream & is)
    {
        read(is,*this);
    }
  
    private:
    double avg_price()const;
    string bookNo;
    unsigned int number=0;
    double revenue=0;
};



int main()
{
    
    if(cin)
    {   
        Sale_data total(cin);
        
        {
            while(cin)
            {   
                Sale_data trans(cin);
                if(isbn(trans)[0]='0')
                break;
                if(isbn(trans)==isbn(total))
                combine(total,trans);
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