#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={1,2,3};
    fill_n(v1.begin(),v1.size(),0);
    for(int n:v1)
    cout << n << " ";
    cin.get();
    cin.get();
    return 0;       
}