//error3.cpp -- using an exception
#include<iostream>
double hmean(double a,double b);
using std::cout,std::cin,std::endl;
int main()
{
    double x,y,z;
    cout << "Enter two numbers: ";
    while(cin >> x >> y)
    {
        try{        //start of try block
            z = hmean(x,y);
        }       //end of try block

        catch(const char * s)   //start of exception handler
        {
            cout << s << endl;
            cout << "Enter a new pair of numbers: ";
            continue;
        }                  // end of handler

        cout << "Harmonic mean of " << x << " and " << y
             << " is " << z << endl;
        
        cout << "Enter next set of numbers <q to quit>: ";
    }
    if(!cin)
    cin.clear();
    
    cout << "Bye!\n";
    cin.get();
    cin.get();
    cin.get();
    
    return 0;
}

double hmean(double a,double b)
{
    if(a==-b)
    throw "bad hmean() arguments: a= -b not allow";
    return 2.0*a*b/(a+b);
}