#include<iostream>
#include"pstock20.h"
#include<cstring>
using std::ostream;

Pstock::Pstock()
{
    company=new char[strlen("no name")+1];
    strcpy(company,"no name");
    shares=0;
    share_val=0.0;
    total_val=0.0;
}

Pstock::Pstock(const char* p,long n, double pr)
{
    company=new char[strlen(p)+1];
    strcpy(company,p);

    if(n<0)
    {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares =0;
    }
    else
        shares=n;
        share_val=pr;
        set_tot();
}

Pstock::~Pstock()
{
delete [] company;
}

void Pstock::buy(long num,double price)
{
    if(num<0)
    {
        std::cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val=price;
        set_tot();
    }
}

void Pstock::sell(long num,double price)
{
    using std::cout;
    if(num<0)
    {
        cout << "Number of shares sold can't be negative. "
             <<"Transaction is aborted.\n";
    }
    else if(num > shares)
    {
        cout << "You can't sell more than you have! "
             <<"Transaction is aborted.\n";
    }
    else
    {
        shares-= num;
        share_val=price;
        set_tot();
    }
}

void Pstock::update(double price)
{
    share_val=price;
    set_tot();
}

ostream & operator<<(ostream & os,const Pstock & p)
{
    using std::ios_base;
    ios_base::fmtflags orig=os.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec = os.precision(3);
    os << "Company: "<<p.company << " Shares: "<<p.shares << '\n';
    os.precision(2);
    os << " Total Worth: $" << p.total_val <<'\n';
    os.setf(orig,ios_base::floatfield);
    os.precision(prec);
    return os;
}

const Pstock & Pstock::topval(const Pstock & p)const
{
    if(p.total_val>total_val)
    return p;
    else 
    return *this;
}