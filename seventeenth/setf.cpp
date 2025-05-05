#include<iostream>
int main()
{
    using namespace std;

    int temp=63;
    cout.setf(ios_base::showpos);
    cout << "Temp = " << temp << endl;
    cout << hex << "for dev, it is " << temp ;
    cout.setf(ios_base::showbase);
    cout.setf(ios_base::uppercase);
    cout << " or " << temp << endl;

    cout << "How" << true << "! oops -- How";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    cin.get();
    cin.get();
    return 0;
}