#include<iostream>
#include<string>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    cout << "Please enter string: (end to quit)" << endl;
    string words,cword;
    list<string>l1;
    while(cin >> words && words!="end")
    {
        l1.push_back(words);
    }

    cout << "Enter the string which need to count: ";
    cin >> cword;
    int n =0;
    n=count(l1.begin(),l1.end(),cword);

    cout << "The " << cword << " appear " << n << " times." << endl;
    cin.get();
    cin.get();
    return 0;
}