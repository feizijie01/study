#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int>l1{1,2,3,0,4};
    auto p=find(l1.crbegin(),l1.crend(),0);
    cout << *p << endl;
    cin.get();
    cin.get();
    return 0;
}