#include<iostream>
#include<string>
using namespace std;
string & translateit(string & a,string b,string c)
{
    for(auto p=a.begin(); p!=a.end();)
    {
        if(*p==*b.begin() && *(p+1)==*(b.begin()+1) && *(p+2)==*(b.begin()+2))
        {
            p =a.erase(p,p+3);
            p=a.insert(p,c.begin(),c.end());
            p+=c.size();
        }
        else
        p++;
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