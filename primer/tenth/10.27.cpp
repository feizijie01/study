#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    vector<int> v1;
    cout << "please enter the numbers(886 to quit): \n";
    int n;
    while(cin >> n)
    {
        if(n==886)
        break;
        v1.push_back(n);
    }

    list<int>l1;
    unique_copy(v1.begin(),v1.end(),inserter(l1,l1.begin()));

    for(int m:l1)
    cout << m << " ";
    cin.get();
    cin.get();
    return 0;
}