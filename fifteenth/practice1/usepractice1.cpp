#include"tv.h"
#include<iostream>

int main()
{
    using std::cout,std::endl,std::cin;
    Tv t1;
    Remote r1;
    cout << "start" << endl;
    r1.xianshi();
    t1.switchmoshi(r1);
    cout << endl;
    r1.xianshi();
    cout << "done." << endl;
    cin.get();
    cin.get();
    return 0;
}