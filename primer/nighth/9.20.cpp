#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
    list<int> l1={1,2,3,4,5,6,7,8,9,10};
    deque<int> ji;
    deque<int> ou;
    for(auto p=l1.begin();p!=l1.end();p++)
    {
        if((*p)%2!=0)
        ji.push_back(*p);
        else
        ou.push_back(*p);
    }

    cout << "Ji shu: ";
    for(auto n:ji)
    cout << n << " ";
    cout << endl;
    cout << "Ou shu: ";
    for(auto m:ou)
    cout << m << " ";

    cin.get();
    cin.get();
    return 0;
}