#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1={1,2,3,4,5};
    int total =0;
    total=accumulate(v1.begin(),v1.end(),0);
    cout << total;
    cin.get();
    return 0;
}