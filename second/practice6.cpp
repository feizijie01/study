#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    double lyear;
    cout << "Enter the number of light years: ";
    cin >> lyear;
    cout << lyear << " light years = " << lyear*63240 << " astronomical units.";
    cin.get();
    cin.get();
    return 0;
}