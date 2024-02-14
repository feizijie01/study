#include<iostream>
#include"practice1.h"
using std::cout;
using std::endl;
Bankaccount::Bankaccount(const string & c1,const string & a1,unsigned long n1)
{
    company=c1;
    account=a1;
    balance=n1;
}

void Bankaccount::show()
{
    cout << "Company: " << company << endl
         << "Account: " << account << endl
         << "Balance: " << balance;
}

void Bankaccount::deposit(unsigned long d1)
{
    balance += d1;
}

void Bankaccount::withdraw(unsigned long w1)
{
    balance -= w1;
}