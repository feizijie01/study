#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    cout.setf(ios_base::showpos);
    cout.setf(ios_base::showpoint);
    cout.setf(ios_base::left,ios_base::adjustfield);
    cout.precision(3);
    ios_base::fmtflags old=cout.setf(ios_base::scientific,ios_base::floatfield);
    cout << "Left Justification: \n";
    long n;
    for(n=1;n<41;n+=10)
    {   
        cout.width(4);
        cout << n << '|';
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }
    
    cout.setf(old,ios_base::floatfield);
    cout.setf(ios_base::internal,ios_base::adjustfield);
    cout << "internal Justification: \n";
    for(n=1;n<41;n+=10)
    {   
        cout.width(4);
        cout << n << '|';
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout.setf(ios_base::right,ios_base::adjustfield);
    cout << "right Justification: \n";
    for(n=1;n<41;n+=10)
    {   
        cout.width(4);
        cout << n << '|';
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    cin.get();
    cin.get();
    return 0;


}