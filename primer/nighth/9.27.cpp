#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> f1={2,3,4,5,41,56,55};
    auto p=f1.before_begin();
    auto c=f1.begin();
    while(c!=f1.end())
    {
        if(*c%2!=0)
        c=f1.erase_after(p);
        else
        {
            p++;
            c++;
        }
    }
    for(int n:f1)
    cout << n << endl;
    cin.get();
    cin.get();
    return 0;
}