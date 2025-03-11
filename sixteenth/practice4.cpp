#include<iostream>
#include<vector>
#include<cstdlib>
#include<iterator>
#include<algorithm>
int reduce(double ar[],int n);
using namespace std;
int main()
{
    double ar1[10]={1.2,1.3,3.5,5.6,3.5,0.1,0.2,0.1,3.5,5.6};
    cout << "long array: \n";
    for(int i=0;i<10;i++)
    cout << ar1[i] << " ";
    cout << endl;
    cout << "After reduce: \n";
    cout << "only " << reduce(ar1,10) << " element now.\n";
    cout << "done.";
    cin.get();
    cin.get();
    return 0;
}

int reduce(double ar[],int n)
{
    vector<double>v1(n);
    vector<double>::iterator last;
    
    for(int i=0;i<n;i++)
    v1[i]=ar[i];
    
    sort(v1.begin(),v1.end());
    last=unique(v1.begin(),v1.end());
    v1.erase(last,v1.end());
    return v1.size();
    
}