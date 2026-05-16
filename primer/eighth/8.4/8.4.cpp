#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string>v1;
    ifstream in("D:\\study\\C++\\CodeProject\\eighth\\8.4\\a.txt");
    if(in.is_open())
    
    while (in.peek()!=EOF)
    {   
        
        string s;
        getline(in,s);
        v1.push_back(s);
        
    }
    in.close();
    
    for(auto p=v1.begin();p!=v1.end();p++)
    {   
        if(p==v1.end()-1)
        cout << *p;
        else
        cout << *p << endl;
    }
    
    cin.get();
    cin.get();
    return 0;
    
}