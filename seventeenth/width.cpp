#include<iostream>
using namespace std;
int main()
{  
    int w=cout.width(30);
    cout << "default width = " << w <<":\n";
    cout.width(5);
    cout << "N" <<':';
    cout.width(8);
    cout << "N * N"<<":\n";

    for(long i=1;i<=100;i*=10)
    {
        cout.width(5);
        cout << i << ':';
        cout.width(8);
        cout << i*i << ":\n";
       
    }
    cin.get();
    cin.get();
    return 0;
}