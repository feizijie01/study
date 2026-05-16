#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{   
    list<int>l1={1,2,3};
    vector<double>v1(l1.begin(),l1.end());
    for(auto p=v1.begin();p!=v1.end();p++)
    cout << *p << endl;
    cout << endl;
    vector<int>v2={4,5,6};
    vector<double>v3(v2.begin(),v2.end());
    for(auto q=v3.begin();q!=v3.end();q++)
    cout << *q << endl;
    cin.get();
    return 0;
}