#include<iostream>
#include<string>
using namespace std;
string s3;
int main()
{
    
    do
    {
        cout << "Please enter two string: \n";
        string s1,s2;
        cin >> s1  >> s2;
        cout << (s1.size()>s2.size()?s2:s1) << endl;
        cout << "Continue? y or n\n";
        cin >> s3;
    }while(!s3.empty() && s3[0]!='n');
    cin.get();
    cin.get();
    return 0;
}