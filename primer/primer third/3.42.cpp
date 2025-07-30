#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int>v1(10,42);
    int ar1[v1.size()];
    int i=0;
    for(int n:v1)
    {
        ar1[i]=n;
        i++;
    }
    for(int j=0;j<v1.size();j++)
    cout << ar1[j] << endl;
    cin.get();
    cin.get();
    return 0;
}