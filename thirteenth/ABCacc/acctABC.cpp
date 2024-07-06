// acctabc.cpp -- bank account class methods
#include<iostream>
#include"acctabc.h"
using std::cout,std::cin,std::endl,std::ios_base,std::string;

// Abstract Base Class
AcctABC::AcctABC(const string & s,long an,double bal)
{
    fullName=s;
    acctNum=an;
    balance=bal;
}

void AcctABC::Deposit(double amt)
{
    if(amt<0)
      cout << "Negative deposit not allowed; "
           << "deposit is cancelled.\n";
    else
      balance+=amt;
}

void AcctABC::Withdraw(double amt)
{
    balance-=amt;
}

// protected methods for formatting
AcctABC::Formatting AcctABC::SetFormat()const
{
    // set up ###.## format
    Formatting f;
    f.flag=cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr=cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting & f)const
{
    cout.setf(f.flag,ios_base::floatfield);
    cout.precision(f.pr);
}

//Brass methods
void Brass::Withdraw(double amt)
{
    if(amt<0)
      cout << "Withdrawal amount must be positive; "
           << "withdrawal is canceled.\n";
    else if(amt<=Balance())
      AcctABC::Withdraw(amt); //调用基类方法
    else
      cout << "Withdrawal amount of $" << amt 
           << " exceeds your balance.\n Withdrawal canceled.\n";
}

void Brass::ViewAcct() const
{
    Formatting f = SetFormat();
    cout << "Brass Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" <<Balance() << endl;
    Restore(f);
}

//BrassPlus Methods
BrassPlus::BrassPlus(const string & s,long an, double bal,
                     double ml,double r):AcctABC(s,an,bal)
{
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
}

BrassPlus::BrassPlus(const Brass & ba,double ml,double r)
           : AcctABC(ba)     //uses implicit copy constructor!!!!!
{
    maxLoan = ml;
    owesBank=0.0;
    rate=r;
}

void BrassPlus::ViewAcct()const 
{
    Formatting f=SetFormat();

    cout << "BrassPlus Client: " << FullName() << endl;
    cout << "Account Number: " << AcctNum() << endl;
    cout << "Balance: $" << Balance() << endl;
    cout << "Maximum loan: $" << maxLoan << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100*rate << "%\n";
    Restore(f);
}

void BrassPlus::Withdraw(double amt)
{
    Formatting f =SetFormat();

    double bal = Balance();
    if(amt <= bal)
    AcctABC::Withdraw(amt);
}