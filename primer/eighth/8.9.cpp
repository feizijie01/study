#include<iostream>
#include<sstream>
#include<string>
using namespace std;
istream & printstream(istream & cs)
{   
    string s0;
    cs >> s0;
    cout << s0;
    cin.clear();
    return cs;
}

int main()
{   
    string s1("abcde");
    istringstream ss(s1);
    printstream(ss);
    cin.get();
    cin.get();
    return 0;
}