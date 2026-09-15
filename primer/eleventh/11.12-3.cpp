#include<utility>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string>strv={"abc","def","ghi"};
    vector<int>intv={1,2,3};
    vector<pair<string,int>>pairv(strv.size());
    for(int i=0;i<strv.size();i++)
    {
        pairv[i]=make_pair(strv[i],intv[i]);
    }

    for(auto p:pairv)
    {
        cout << p.second << ": " << p.first << endl;
    }
    cin.get();
    cin.get();
    return 0;
}