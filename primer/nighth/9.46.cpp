#include<iostream>
#include<string>
using namespace std;
string & tianjia(string & a,string b,string c)
{
     auto p = a.insert(a.begin(),b.begin(),b.end());
     p = a.insert(p+a.size(),c.begin(),c.end());
     return a;
}
int main()
{
     string a("Jack");
     string b("Mr.");
     string c("III");
     tianjia(a,b,c);
     cout << a << endl;
     cin.get();
     return 0;

}