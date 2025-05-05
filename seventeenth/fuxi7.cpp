#include<iostream>
#include<string>
#include<iomanip>
int main()
{
    using namespace std;
    string name;
    double hours;
    double wages;
    cout << "Enter ur name: ";
    getline(cin,name);
    cout << "Enter ur hourly wages: ";
    cin >> wages;
    cout<< "Enter number of ours worked: ";
    cin >> hours;

    cout << "First format:\n";
    cout << setw(20) << right << name << ": $"
         << setw(8) <<fixed << setprecision(2) <<wages << ":"
         << setw(6) << setprecision(1) <<hours << endl;
    

    cout << "Second format:\n";
    cout << setw(20) << left << name << ": $"
         << setw(8) << setprecision(2) << wages << ":"
         << setw(6) << setprecision(1) <<hours << endl;
    
    cin.get();
    cin.get();
    return 0;
    
}