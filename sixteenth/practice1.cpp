#include<iostream>
#include<string>
#include<cctype>
using std::cin,std::cout,std::endl,std::string;

bool checkhw(string &);

int main()
{
    cout << "Please enter string(quit to quit): \n";
    string s1;
    while(cin >> s1 && s1!="quit")
    {
        int n=s1.size();
        int tuichu=1;
        for(int i=0;i<n;i++)
        {   
            
            if(!islower(s1[i]))
            {
                tuichu=0;
                break;
            }
            
        }
        
        if(tuichu==0)
        {
            cout << "Please enter string(xiaoxiezimu,quit to quit): \n";
            continue;
        }

        if(checkhw(s1))
        cout << s1 << " is a huiwen.\n";
        else
        cout << s1 << " isnt a huiwen.\n";

        cout << "Please enter string(quit to quit): \n";
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

bool checkhw(string & s)
{
    string s0=s;
    string s1(s.rbegin(),s.rend());
    cout << "s0: "<< s0 << endl;
    cout << "s1: "<< s1 << endl;
    return s0==s1;
}