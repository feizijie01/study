#include<iostream>
#include<string>

int main()
{
    using namespace std;
    string s,s0;
    while(cin >> s && !s.empty())
    {   
        if(s0==s)
        {
            cout << s << " repeat.\n";
            cin.clear();
            break;
        }
        else if(s0!=s)
        s0=s;

        if(cin.peek()=='\n')
        {
            cout << "No words repeat.\n";
            break;
        }
    }
    cin.get();
    cin.get();
    return 0;
}