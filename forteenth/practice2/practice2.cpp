#include<iostream>
#include"winc2.h"
using std::cout,std::cin,std::endl;
void Wine::GetBottles()
{
        cout << "Enter " << name << " data for " << year << " year(s):\n";
        
        for(int i=0;i<year;i++)
        {
            
            cout << "Enter year: " ;
            cin >> PairArray::ReportYears(i);
            cout << "Enter bottles for that year: ";
            cin >> PairArray::ReportBottles(i);
        }
        
}

void Wine::Show()
{
    cout << "Wine: " << name << endl;
    cout << "\t" << "Year " << "\t" << "Bottles\n";
    for(int i=0;i<year;i++)
    cout << "\t" << PairArray::ReportYears(i) << "\t" << PairArray::ReportBottles(i) << endl;
}