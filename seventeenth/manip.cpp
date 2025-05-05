#include<iostream>
using namespace std;

int main()
{
    cout << "Enter an int: ";
    int n;
    cin >> n;

    cout << "n     n*n\n";
    cout << n << "     " << n*n<<"(dec)\n";

    cout << hex;
    cout << n << "     " << n*n<<"(hex)\n";

    cout << oct;
    cout << n << "     " << n*n << "(oct)\n";

    dec(cout);
    cout << n << "     " << n*n<<"(dec)\n";

    cin.get();
    cin.get();
    return 0;
}