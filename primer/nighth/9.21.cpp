#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{   
    vector<int> v1;
    int n;
    
    vector<int>::iterator iter=v1.begin();
    while(cin >> n)
    {   
        if(n==0)
        break;
        iter=v1.insert(iter,n);
    }
    for(int m:v1)
    cout  << m << " ";
    cin.get();
    cin.get();
    return 0;
}