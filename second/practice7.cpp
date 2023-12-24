#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int hours,minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: " << hours << ":" << minutes;
    cin.get();
    cin.get();
    return 0;
}