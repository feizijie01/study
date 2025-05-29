#include<iostream>
#include<string>
using namespace std;

template<typename T>
void showlist(const T & value)
{
    cout << value << endl;
}

void showlist(){}

template<typename T, typename...Args>
void showlist(const T & value,const Args &...args)
{
    cout << value << ", ";
    showlist(args...);
}

int main()
{
    int n=3;
    double m=1.21;
    const string & mr="abcd efg.";
    showlist(n,m);
    showlist(m*m,'!',7,mr);
    cin.get();
    return 0;

}

