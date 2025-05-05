//precise.cpp -- setting the precision
#include<iostream>
int main()
{
    using namespace std;
    float p1=20.40;
    float p2=1.9+8.0/9.0;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout.precision(2);
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;

    cin.get();
    cin.get();
    return 0;
}