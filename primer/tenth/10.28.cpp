#include<iostream>
#include<vector>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    vector<int>v0={1,2,3,4,5,6,7,8,9};
    list<int>l1;
    vector<int>v2,v3;
    copy(v0.begin(),v0.end(),front_inserter(l1));
    copy(v0.begin(),v0.end(),back_inserter(v2));
    copy(v0.begin(),v0.end(),inserter(v3,v3.begin()));

    cout << "Front inserter: ";
    for(int n:l1)
    cout << n << " ";
    cout << endl;

    cout << "Back inserter: ";
    for(int n:v2)
    cout << n << " ";
    cout << endl;

     cout << "Inserter from begin(): ";
    for(int n:v3)
    cout << n << " ";
    cout << endl;

    cin.get();
    cin.get();
    return 0;
}