#include<iostream>
#include"pstock20.h"
using std::cin;
const int STKS=4;
int main()
{
    Pstock stocks[STKS]={
        Pstock("NanoSmart",12,20.0),
        Pstock("Boffo Objects",200,2.0),
        Pstock("Monolithic Obelisks",130,3.25),
        Pstock("Fleep Enterprises",60,6.5)
    };

    std::cout << "Stock holdings:\n";
    int st;
    for(st=0;st<STKS;st++)
    std::cout << stocks[st];

    const Pstock*top = &stocks[0];
    for(st=1;st<STKS;st++)
    top=&top->topval(stocks[st]);
    
    std::cout << "\nMost valuable holding:\n";
    std::cout << *top;
    cin.get();
    cin.get();
    return 0;
}