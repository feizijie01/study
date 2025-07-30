#include<iostream>
#include<string>

int main()
{
    using namespace std;
    string s1,s2;
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    cout << "Compare two string.\n";
    if(s1>s2)
    cout << s1 << " > " << s2;
    else if(s1==s2)
    cout << s1 << " == " << s2;
    else if(s1<s2)
    cout << s1 << " < " << s2;
    cin.get();
    cin.get();
    return 0;
}