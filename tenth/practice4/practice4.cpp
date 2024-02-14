#include<iostream>
#include"practice4.h"
using SALES::Sales;
using SALES::QUARTERS;
using std::cout;
using std::cin;
using std::endl;
Sales::Sales(const double ar[],int n)
{
   int i=QUARTERS>=n?n:QUARTERS;
   max=0.0;
   min=ar[0];
   double total = 0.0;
   int four = QUARTERS;

   while(i<four)
   sales[--four]=0;
   
   for(int j=0;j<i;j++)
   sales[j]=ar[j];
   
   for(int k=0;k<i;k++)
   {
   max=sales[k]>=max?sales[k]:max;
   min=sales[k]>=min?min:sales[k];
   total += sales[k];
   }
   average=total/i;
}

Sales::Sales(Sales & s1)
{
   cout << "Please enter the sales for 4 quarters(in double): " << endl;
   for(int i =0;i<QUARTERS;i++)
   {
      cout << "Quarter " << i+1 << " : ";
      cin >> s1.sales[i];
      if(!cin)
      {  
         cin.clear();
         while(cin.get()!='\n')
         continue;
         cout << "Please enter double: " << endl;
         i--;
         continue;
      }
   }
   s1.max=0.0;
   s1.min=sales[0];
   double total = 0.0;

   for(int j=0;j<QUARTERS;j++)
   {
      max=max>=sales[j]?max:sales[j];
      min=min<=sales[j]?min:sales[j];
      total+=sales[j];
   }
   s1.average=total/QUARTERS;
   
}

void Sales::showSales()
{
   cout << "Max: " << this->max << endl;
   cout << "Min: " << this->min << endl;
   cout << "Average: " << this->average;
}