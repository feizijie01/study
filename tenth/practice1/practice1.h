#include<string>
#ifndef PRACTICE1_H_
#define PRACTICE1_H_
using std::string;
class Bankaccount
{
    private:
    string company;
    string account;
    unsigned long balance;
    public:
    Bankaccount(){company="c";account="a";balance=0;}
    Bankaccount(const string &c1,const string & a1="aaaa",unsigned long n=10000);

    void show();
    void deposit(unsigned long);
    void withdraw(unsigned long);
};
#endif