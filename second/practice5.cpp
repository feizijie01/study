#include<iostream>
using std::cout;
using std::cin;
using std::endl;

double CetoFa(int n);
int main()
{   
    int celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Cesius is " <<celsius*1.8+32
         << " degrees Fahrenheit.";
    cin.get();
    cin.get();
    return 0;
}