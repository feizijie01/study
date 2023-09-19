#include<iostream>
using namespace std;
double pingjun(double x,double y);
int main()
{   
    double x,y;
    cout << "Please enter two doubles : ";
    while(1>0)
    {   
        if(cin>>x>>y)
         { 
           if(x==0 or y==0)
           break;
           else
           {
             cout <<"The hamonic mean: " <<  pingjun(x,y) << endl;
             cout << "Please enter other two doubles : ";
             continue;
           }
           
         }
        else
         {
           cin.clear();
           while(cin.get()!='\n')
           continue;
           cout << "Please enter doubles: ";
           continue;
         }
    }
    cout << "Done";
    cin.get();
    cin.get();
    return 0;
}

double pingjun(double x,double y)
{
    return 2.0*x*y/(x+y);
}