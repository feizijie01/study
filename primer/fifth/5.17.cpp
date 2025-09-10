#include<iostream>
#include<vector>
int main()
{
    using namespace std;
    vector<int>v1{0,1,1,2};
    vector<int>v2{0,1,1,2,3,4,5};
    decltype(v1.size()) i=0;
    if(v1.size()<v2.size())
    {
        while(v1[i]==v2[i])
        i++;
        if(i==v1.size())
        cout << "v1 is a prefix of v2.\n";
        else
        cout <<"v1 isnt a prefix of v2.\n";
    }else if(v2.size()<v1.size())
    {
        while(v2[i]==v1[i])
        i++;
        if(i==v2.size())
        cout << "v2 is a prefix of v1.\n";
        else
        cout <<"v2 isnt a prefix of v1.\n";
    }
    cin.get();
    cin.get();
    return 0;
}