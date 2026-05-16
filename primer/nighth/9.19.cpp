#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    string s1;
    list<string> l1;
   
    while (cin >> s1 )
    {   
        if(s1[0]=='0')
        break;
        l1.push_back(s1);
        
        
    }

    for(auto p=l1.begin();p!=l1.end();p++)
    cout << *p << endl;
    cin.get();
    cin.get();
    return 0;
}