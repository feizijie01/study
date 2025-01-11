//error2.cpp -- returning an error code
#include<iostream>
#include<cfloat>    // (or float.h) for DBL_MAX
using std::cout,std::cin,std::endl;
bool hmean(double a, double b,double * ans);

int main()
{
    double x,y,z;
    cout << "Enter two numbers: ";
    while(cin >> x >> y)
    {
        if(hmean(x,y,&z))
        cout << "Harmonic mean of " << x << " and "
             << y << " is " << z << endl;

        else
        cout << "One value should not be the negative "
             << "of the other - try again.\n";
        cout << "Enter next set of numbers<q to quit>: ";
    }
    if(!cin)
    cin.clear();
    cin.get();
    cin.get();
    cout << "Bye!\n";
    return 0;
}

bool hmean(double a, double b ,double * ans)
{
    if(a== -b)
    {
        *ans = DBL_MAX;
        return false;
    }

    else
    {
        *ans = 2.0*a*b/(a+b);
        return true;
    }
}