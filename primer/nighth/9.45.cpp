#include<iostream>
#include<string>
using namespace std;
string & tianjia(string & a,string b,string c)
{
     auto p = a.insert(a.begin(),b.begin(),b.end());
     a.append(c);
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