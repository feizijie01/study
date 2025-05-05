#include<iostream>
#include<sstream>
#include<string>

int main()
{
    using namespace std;
    ostringstream outstr;
    string hdisk;
    int gb;

    cout << "Please enter the hdisk name: ";
    getline(cin,hdisk);
    cout << "Please enter the capacity: ";
    cin >> gb;
    
    outstr << "The " << hdisk << " disk has " << gb << " capacity.\n";

    string s=outstr.str();
    cout << s;
    cin.get();
    cin.get();
    return 0;
}