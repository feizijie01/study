#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for(int &n:v)
    {
        n/2>0?n*=2:n=n;
    }
    for(int n:v)
    cout << n << endl;
    cin.get();
    return 0;
}