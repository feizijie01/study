#include<iostream>
#include<string>
#include<cctype>
using std::cin,std::cout,std::endl,std::string;

bool checkhw(string &);

int main()
{
    cout << "Please enter string(quit to quit): \n";
    string s1;
    
    while(getline(cin,s1) && s1!="quit")
    {   
        string ss;
        int n=s1.size();
        for(int i=0;i<n;i++)
        {   
            
            if(islower(s1[i]) || isupper(s1[i]))
            {
                if(isupper(s1[i]))
                {
                    tolower(s1[i]);
                }
                ss += s1[i]; 
            }
        }
        
       
        if(checkhw(ss))
        cout << ss << " is a huiwen.\n";
        else
        cout << ss << " isnt a huiwen.\n";

        cout << "Please enter string(quit to quit): \n";
    }
    cin.get();
    cin.get();
    cout << "Done.\n";
}

bool checkhw(string & s)
{
    string s0=s;
    string s1(s.rbegin(),s.rend());
    cout << "s0: "<< s0 << endl;
    cout << "s1: "<< s1 << endl;
    return s0==s1;
}