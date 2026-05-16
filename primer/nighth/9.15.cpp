#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1{1,2,3,4,5};
    vector<int>v2{1,2,3,4,7};
    if(v1.size()==v2.size())
    {
        int i=0;
        while (v1[i]==v2[i])
        {
            i++;
        }
        if(i==v1.size())
        cout << "They are equal.\n";
        else
        cout << "They are not equal.\n";
    }
    else
    cout  << "They are not equal.\n";
    
    cin.get();
    return 0;
}