#include<iostream>
#include<initializer_list>

using std::initializer_list,std::cout,std::endl,std::cin;
double sum(initializer_list<double>il);
double average(const initializer_list<double>& il);
int main()
{
    cout << "List 1: sum: " << sum({2.0,3.0,4.0}) << " " << "ave: " << average({2.0,3.0,4.0}) << endl;
    initializer_list<double>dl={1.1,2.2,3.3,4.4,5.5};
    cout << "List 2: sum: " << sum(dl) << " " << "ave: " << average(dl)<< endl;
    dl={16.0,25.0,36.0,40.0,64.0};
    cout << "List 3: sum: " << sum(dl) << " " << "ave: " << average(dl)<< endl;
    cin.get();
    cin.get();
    return 0;
}

double sum(initializer_list<double>il)
{
    double tot=0.0;
    for(auto p=il.begin();p!=il.end();p++)
    tot += *p;
    return tot;
}

double average(const initializer_list<double> & il)
{
    int n=il.size();
    double ave=0.0;
    if(n>0)
    {   
        double tot=0.0;
        for(auto p=il.begin();p!=il.end();p++)
        tot += *p;
        ave=tot/n;
    }
    return ave;
}
