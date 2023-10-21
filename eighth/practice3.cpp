#include<iostream>
#include<string>
using namespace std;
void change(string &);
int main()
{   
    string str;
    string & s1=str;
    cout << "Enter a string(q to quit): ";
    while(getline(cin,str))
    {
        if(str[0]=='q'&& str.size()==1)
        break;
        else
        {
            change(s1);
            cout << s1 << endl;
            cout << "Nex string(q to quit): ";
        }
    }
    cout << "BYE." << endl;
    cin.get();
    cin.get();
    return 0;
}

void change(string & ss)
{
    for(int i=0;i<ss.size();i++)
    {
        ss[i]=toupper(ss[i]);
        
    }
}