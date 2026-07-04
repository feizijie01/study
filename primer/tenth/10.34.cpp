//逆序打印一个vec
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>v {1,2,3,4,5};
    for(auto p=v.rbegin();p!=v.rend();p++)
    cout << *p << " ";
    cin.get();
    cin.get();
    return 0;
}