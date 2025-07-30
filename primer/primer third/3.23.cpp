#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int>v(10,42);
    for(auto p=v.begin();p!=v.end();p++)
    (*p)*=2;
    for(auto p=v.begin();p!=v.end();p++)
    {   
        if(p==v.begin())
        cout << *p;
        else
        cout << " " << *p;
    }
    cin.get();
    cin.get();
    return 0;
}