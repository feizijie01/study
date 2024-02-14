#include<iostream>
#include"practice1.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
    Bankaccount b4;
b4.show();
cout << endl;
Bankaccount b3=Bankaccount("c3","a3");
b3.show();
cout << endl;
Bankaccount b2=Bankaccount("c2");
b2.show();
cout << endl;
Bankaccount b1=Bankaccount("binance","feizijie",10000);
b1.show();
cout << endl;
b1.deposit(1000);
b1.show();
cout << endl;
b1.withdraw(500);
b1.show();
cin.get();
cin.get();
return 0;

}