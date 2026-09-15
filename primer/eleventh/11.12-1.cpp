#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    vector<string>Stringv={"abc","def","ghi"};
    cout << "String vector: ";
    for(string s:Stringv)
    cout << s << " ";
    cout << endl;

    vector<int>Integerv={1,2,3};
    cout << "int vector: ";
    for(int n:Integerv)
    cout << n << " ";
    cout << endl;
    
    vector<pair<string,int>>Pairv(3);  
    for(int i=0;i<Stringv.size();i++)
    {
        Pairv[i].first=Stringv[i];
        Pairv[i].second=Integerv[i];
    }

    cout << "Pair Vector: \n ";
    for(pair<string,int>p:Pairv)
    cout << p.second << ":" << p.first << endl;
    cout << endl;
    cin.get();
    cin.get();
    return 0;
}