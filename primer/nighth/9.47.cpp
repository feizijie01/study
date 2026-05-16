/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s("ab2c3d7R4E6");
    string::size_type n=0;
    while((n=s.find_first_of("1234567890",n))!=string::npos)
    {
        cout << "number: " << s[n] << " " << "Dex: " << n << endl;
        n++;
    }
    cin.get();
    return 0;
}

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s("ab2c3d7R4E6");
    string::size_type n=0;
    while((n=s.find_first_not_of("1234567890",n))!=string::npos)
    {
        cout << "number: " << s[n] << " " << "Dex: " << n << endl;
        n++;
    }
    cin.get();
    return 0;
}