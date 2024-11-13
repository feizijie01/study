#include<iostream>
#include"winc.h"
using std::cout,std::cin,std::endl;
void Wine::GetBottles()
{
        cout << "Enter " << name << " data for " << year << " year(s):\n";
        
        for(int i=0;i<year;i++)
        {
            
            cout << "Enter year: " ;
            cin >> yb.ReportYears(i);
            cout << "Enter bottles for that year: ";
            cin >> yb.ReportBottles(i);
        }
        
}

void Wine::Show()
{
    cout << "Wine: " << name << endl;
    cout << "\t" << "Year " << "\t" << "Bottles\n";
    for(int i=0;i<year;i++)
    cout << "\t" << yb.ReportYears(i) << "\t" << yb.ReportBottles(i) << endl;
}