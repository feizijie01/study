#include<iostream>
#include<iomanip>
#include<cmath>

int main()
{
    using namespace std;

    cout << fixed;
    cout << setw(6) << "N" 
         << setw(14) << "square root"
         << setw(15) << "fourth root" << endl;


    for(int n=10;n<=100;n+=10)
    {
        double root = sqrt(double(n));
        cout << setw(6) << setfill('.') << n
             << setw(12) << setprecision(3) <<  setfill(' ')<< root 
             << setw(14) << setprecision(4) << sqrt(root);
        cout << endl;
    }
    cin.get();
    cin.get();
    return 0;
}