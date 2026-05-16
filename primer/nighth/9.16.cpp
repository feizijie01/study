#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main()
{
    list<int>l1={1,2,3,4};
    vector<int>v1={1,2,3,5};
    if(l1.size()==v1.size())
    {   
        int i=0;
        auto p=l1.begin();
        while(i<l1.size())
        {
            if(*p==v1[i])
            {
                i++;
                p++;
            }
            else
            {
                cout << "They are not equal.\n";
                break;
            }
        }
        if(i==l1.size())
        cout << "They are equal.\n";
    }
    else
    cout << "They are not equal.\n";
    cin.get();
    return 0;
}