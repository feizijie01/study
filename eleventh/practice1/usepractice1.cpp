#include<iostream>
#include"practice1.h"
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    
    double n;
    cout << "Please enter the double: ";
    cin >> n;
    StoneAndPounds s1(10.0);
    StoneAndPounds s2(11.0);
    cout << "S1 ";
    s1.show();
    cout << endl;
    cout << "S1 * n will be: " << endl;
    (s1*n).show();
    cout << "n * S2 will be: " << endl;
    (n*s2).show();
    cin.get();
    cin.get();
    return 0;
}