#include<iostream>
#include<string>
using namespace std;
string & translateit(string & a,string b,string c)
{
    for(int i=0; i!=a.size(); i++)
    {
        if(a[i]==b[0] && a[i+1]==b[1] && a[i+2]==b[2])
        {
            a.replace(i,3,c);
        }
    }
    return a;
}

int main()
{
    string s("abc,def,tho,thru");
    string oldVal="tho";
    string newVal="though";
    translateit(s,oldVal,newVal);
    cout << s << endl;
    cin.get();
    return 0;
}