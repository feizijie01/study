#include<iostream>
#include"practice4.h"
using std::cout;
using std::cin;
using std::endl;
using SALES::Sales;
using SALES::QUARTERS;
int main()
{
    double ar[4]={1.1,2.2,3.3,4.4};
    Sales s1=Sales(ar,4);
    Sales s2=Sales(s2);
    s1.showSales();
    cout << endl << endl;
    s2.showSales();
    cin.get();
    cin.get();
    return 0;
}