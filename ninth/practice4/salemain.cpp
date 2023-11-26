#include<iostream>
#include"sale.h"
using std::cin;
using std::cout;
using std::endl;

using SALES::Sales;
using SALES::QUARTERS;
using SALES::setSales;
using SALES::showSales;

int main()
{
   Sales s1;
   Sales s2;
   double ar[2]={1.1,2.2};
   setSales(s1);
   setSales(s2,ar,2);
   showSales(s1);
   showSales(s2);
   cin.get();
   cin.get();
   return 0;
}
