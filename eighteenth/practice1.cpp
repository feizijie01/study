#include<iostream>
#include<list>
using namespace std;

template<typename T>
T  average_list(list<T>l1)
{   
    T total;
    for(auto p=l1.begin();p!=l1.end();p++)
    total=total += *p;
    return total/l1.size();
}



int main()
{
    //list of double deduced from list contents
    auto q = average_list<double>({15.4,10.7,9.0});
    cout << q << endl;
    cout << average_list<double>({20,30,19,17,45,38}) << endl;
    auto ad = average_list<double>({'A',70,65.33});
    cout << ad << endl;
    cin.get();
    return 0;
}