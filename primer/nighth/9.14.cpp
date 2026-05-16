#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<char *>l1={"ab","cd","ef"};
    vector<string>v1={"gh","jk"};
    v1.assign(l1.begin(),l1.end());
    for(auto p=v1.begin();p!=v1.end();p++)
    cout << *p << endl;
    cin.get();
    return 0;
}