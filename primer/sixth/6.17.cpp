#include<iostream>
#include<string>
using namespace std;
void havebig(const string & s)
{
    for(auto c:s)
    {
        if(isupper(c))
        {
            cout << "Big.";
            break;
        }
    }
}

void change(string & s)
{
    for(auto c:s)
    toupper(c);
}