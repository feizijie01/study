#include<iostream>
#include<vector>
#include<string>
#define NDEBUG
#include<cassert>
using namespace std;

void show(vector<string> & v1)
{
    if(v1.begin()!=v1.end()-1)
    {
        cout << *v1.begin();
        v1.erase(v1.begin());
        show(v1);
    }
    else
    cout << *v1.begin();
}

int main()
{ 
    vector<string>v1{"abc","def","ghi","jkl"};
    assert(v1.size()>1);
    show(v1);
    cin.get();
    return 0;
}