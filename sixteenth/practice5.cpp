#include<iostream>
#include<vector>
#include<cstdlib>
#include<iterator>
#include<algorithm>
template<class T>
int reduce(T ar[],int n);
using namespace std;
int main()
{
    long ar1[10]={1L,1L,3L,5L,5L,1L,1L,1L,3L,5L};
    cout << "long array: \n";
    for(int i=0;i<10;i++)
    cout << ar1[i] << " ";
    cout << endl;
    cout << "After reduce: \n";
    cout << "only " << reduce(ar1,10) << " element now.\n";
    

    string ar2[10]={"boy","girl","cup","egg","apple","boy","egg","hill","gone","cup"};
    cout << "string array: \n";
    for(int i=0;i<10;i++)
    cout << ar2[i] << " ";
    cout << endl;
    cout << "After reduce: \n";
    cout << "only " << reduce(ar2,10) << " element now.\n";
    cout << "done.";

    cin.get();
    cin.get();
    return 0;
}

template<class T>
int reduce(T ar[],int n)
{
    vector<T>v1(n);
    typename vector<T>::iterator last;
    
    for(int i=0;i<n;i++)
    v1[i]=ar[i];
    
    sort(v1.begin(),v1.end());
    last=unique(v1.begin(),v1.end());
    v1.erase(last,v1.end());
    return v1.size();
    
}