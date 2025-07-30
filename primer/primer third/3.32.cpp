#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    int ar0[10],ar1[10];
    for(int i=0;i<10;i++)
    {
        ar0[i]=i;
        ar1[i]=ar0[i];
    }

    vector<int>v1;
    for(int n:ar0)
    {
        v1.push_back(n);
    }
    cout << "array: ";
    for(int i=0;i<10;i++)
    {
        if(i==0)
        cout << ar1[i];
        else
        cout << " " << ar1[i];
    }
    cout << endl;
    cout << "vector: ";
    for(auto p=v1.begin();p!=v1.end();p++)
    {
        if(p==v1.begin())
        cout << *p;
        else
        cout << " " << *p;
    }

    cin.get();
    cin.get();
    return 0;
}