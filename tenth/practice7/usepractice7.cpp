#include<iostream>
#include"practice7.h"
using std::cout;
using std::endl;
using std::cin;
int main()
{
    Plorg p1;
    p1.showplorg();
    cout  << endl;
    cout << "Now change the CI to 10." << endl;
    p1.changeCi(10);
    p1.showplorg();
    cin.get();
    return 0;
}