// str2.cpp -- capacity() and reserve()
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string empty;
    string small="bit";
    string large="Elephants are a girl's best friend";
    cout << "Size:\n";
    cout << "\tempty: " << empty.size() << endl;
    cout << "\tsmall: " << small.size() << endl;
    cout << "\tlarge: " << large.size() << endl;
    cout << endl;
    cout << "Capacity: \n";
    cout << "\tempty: " << empty.capacity() << endl;
    cout << "\tsmall: " << small.capacity() << endl;
    cout << "\tlarge: " << large.capacity() << endl;
    empty.reserve(50);
    cout << "After reserve, empty capacity: " << empty.capacity() << endl;
    cin.get();
    cin.get();
    return 0;
}