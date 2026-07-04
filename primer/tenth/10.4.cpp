#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    vector<double>v1={1.1,2.2,3.3,4.4,5.5};
    double total =0;
    total=accumulate(v1.begin(),v1.end(),0.0);
    cout << total;
    cin.get();
    return 0;
}