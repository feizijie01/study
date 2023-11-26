#include<iostream>
#include"sale.h"
using std::cin;
using std::cout;
using std::endl;

namespace SALES 
{
void setSales(Sales & s,const double ar[],int n)
{
    int real = n<4?n:4;

        if(real==0)
        s.max=s.min=s.average=0;

        if(real!=0)
        {
            double max=0.0,total=0.0;
            double min = ar[0];

            for(int i=0;i<real;i++)
            {
                s.sales[i]=ar[i];
                total += s.sales[i];
                max=max>ar[i]?max:ar[i];
                min=min<ar[i]?min:ar[i];
            }
        
            s.average=total/real;
            s.max=max;
            s.min=min;
        }  

        int last = QUARTERS-real;
        while(last--)
        {   
            s.sales[last+2]=0;
        }
}

void setSales(Sales & s)
{
    cout << "Please enter the sales volume for 4 quarters in double: " << endl;
    double max,min,total;
    total=max=0.0;
    for(int i=0;i<QUARTERS;i++)
    {
        cout << "Q" << i+1 << ": ";
        cin >> s.sales[i];
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
            continue;
            cout << "Please enter the double." << endl;
            --i;
            continue;
        }
        if(i==0)
        min=s.sales[i];
        min=min<s.sales[i]?min:s.sales[i];
        max=max>s.sales[i]?max:s.sales[i];
        total+=s.sales[i];
    }
    
    s.average=total/QUARTERS;
    s.max=max;
    s.min=min;
}

void showSales(const Sales & s)
{
    cout << "The sales volume of 4 quarters are: " << endl;
    for(int i=0;i<QUARTERS;i++)
    cout << "Q" << i+1 << ": "<< s.sales[i] << endl;
    
    cout << "Average: " << s.average << endl;
    cout << "Max: "<< s.max << endl;
    cout << "Min: " << s.min  << endl;
    cout << endl;
}
}