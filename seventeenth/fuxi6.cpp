#include<iostream>
#include<iomanip>

int main()
{
    using namespace std;
    cout << "Please enter a number: ";
    long n;
    cin >> n;
    cout << setw(15);
    cout << oct <<n <<" "<< dec << n << " "<< hex << n ;
    cin.get();
    cin.get();
    return 0;
}