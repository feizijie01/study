// stock10.cpp -- Stock class with constructors, destructor added
#include<iostream>
#include"stock10.h"
using std::cout;
//constructors(verbose versions)
Stock::Stock()
{
    cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val=0.0;
    total_val=0.0;
}

Stock::Stock(const std::string & co,long n, double pr)
{
   // 为什么用引用？？？C++函数以对象为参数时一般使用 “引用”
   // 与直接使用对象变量相比，使用变量的引用更加高效
   cout << "Constructor using " << co << " called\n";
   company = co;

   if(n<0)
   {
    std::cout << "Number of shares can't be negative; "
              << company << " shares set to 0.\n";
    shares = 0; 
   }
   else
    shares = n;
    share_val = pr;
    set_tot();
}

// class destructor
Stock::~Stock()    // verbose class destructor
{
    cout << "Bye, " << company << "!\n";
}

// other methods
void Stock::buy(long num,double price)
{
    if(num<0)
    {
        cout << "Number of shares purchased can't be negative."
             << "Transaciton is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::sell(long num,double price)
{
    if(num <0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = cout.setf(ios_base::fixed,ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company << " Shares: " << shares << '\n';
    cout << " Share Price: $" << share_val;
    //set format to #.##
    cout.precision(2);
    cout << " Total Worth: $" << total_val << '\n';

    //restore original format
    cout.setf(orig,ios_base::floatfield);
    cout.precision(prec);
}