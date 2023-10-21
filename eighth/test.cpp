#include<iostream>
#include<cstring>
using namespace std;
const int maxaa=1;
template<typename T>
auto add(T a,T b) -> decltype(&a);

int main()
{   
    double a=1.0;
    double b = 2.0;
    double * p=&a;
    cout << add(a,b);
    
    cin.get();
    return 0;
}

template<typename T>
auto add(T a,T b) -> decltype(&a)
{   
    T*p=&a;
    return p;
}















