#include<iostream>
#include<vector>

int main()
{   
    using namespace std;
    int ar1[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int>v1(begin(ar1),end(ar1));
    for(int n:v1)
    cout << n << endl;
    cin.get();
    cin.get();
    return 0;
}