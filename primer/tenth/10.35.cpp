#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int>v1{1,2,3,4,5};
    for(auto p=v1.end()-1;p!=v1.begin()-1;p--)
     cout << *p << " ";
     cin.get();
     cin.get();
     return 0;
}