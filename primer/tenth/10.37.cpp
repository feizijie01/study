#include<vector>
#include<iterator>
#include<list>
#include<iostream>
using namespace std;
int main()
{   
    vector<int>v1{1,2,3,4,5,6,7,8,9,10};
    list<int>l1(3);
    copy(v1.rbegin()+4,v1.rbegin()+7,l1.begin());
    for(auto n:l1)
    cout << n << " ";
    cin.get();
    cin.get();
    return 0;
}