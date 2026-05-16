#include<iostream>
#include<string>
#include<deque>
using namespace std;
int main()
{
    string s1;
    deque<string> d1;

    while (cin >> s1 )
    {   
        if(s1[0]=='0')
        break;
        d1.push_back(s1);
        
        
    }

    for(auto p=d1.begin();p!=d1.end();p++)
    cout << *p << endl;
    cin.get();
    cin.get();
    return 0;
}