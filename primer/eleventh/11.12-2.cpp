#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
pair<string,int>makePair(const string & s,int n)
{
    pair<string,int>p;
    p.first=s;
    p.second=n;
    return p;
}

int main()
{
    vector<int>intv={1,2,3};
    vector<string>strv={"abc","def","ghi"};
    vector<pair<string,int>>pairv(intv.size());
    for(int i=0;i<strv.size();i++)
    {
       pairv[i]=(makePair(strv[i],intv[i])); 
       cout << pairv.back().second << ": " << pairv.back().first << endl;   
    }
    cin.get();
    cin.get();
    return 0;
}