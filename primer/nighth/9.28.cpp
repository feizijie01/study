#include<iostream>
#include<forward_list>
#include<string>
using namespace std;

void insertfl(forward_list<string> & f,string s1,string s2)
{   
    auto p=f.before_begin();
    auto c=f.begin();
    while (c!=f.end())
    {
        if(*c==s1)
        {   
            
            f.insert_after(c,s2);
            break;
        }
        else
        {
            c++;
            p++;
        } 
    }
    if(c==f.end())
    {
       
        f.insert_after(p,s2);
    }
    
}

int main()
{
    forward_list<string>f1={"abc","def","opq","rst"};
    string s1="cef";
    string s2="aaa";
    insertfl(f1,s1,s2);
    for(string s:f1)
    cout << s << endl;
    cin.get();
    cin.get(); 
    return 0;
}