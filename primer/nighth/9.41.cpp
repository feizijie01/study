#include<iostream>
#include<vector>
#include<string>
int main()
{
    using namespace std;
    vector<char> ve={'a','b','c'};
    string s(ve.begin(),ve.end());
    cout << s<< endl;
    cin.get();
    return 0;
}