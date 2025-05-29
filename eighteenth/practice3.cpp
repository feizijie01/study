#include<iostream>
using namespace std;

template<typename T>
long double Sum_value(T value)
{ 
    return (long double)value;
}

template<typename T,typename...Argvs>
long double Sum_value(T value,Argvs...argvs)
{
    long double total=0;
    total = (long double)value + Sum_value(argvs...);
    return total;
}



int main()
{
    cout << Sum_value('A',1,2.5);
    cin.get();
    return 0;
}