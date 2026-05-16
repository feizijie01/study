#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> vi={1,2,3,4,5,6};
    vector<int>::iterator iter=vi.begin();
    while(iter!=vi.end())
    {
        if(*iter %2)
        iter=vi.insert(iter, *iter);
        ++iter;
    }
    
}