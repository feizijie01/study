#include<iostream>
#include<vector>
#include<list>
int main()
{
    using namespace std;
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    vector<int>v1;
    list<int>l1;
    for(int n:ia)
    {   
        v1.push_back(n);
        l1.push_back(n);
    }
    
    auto p=v1.begin();
    auto q=l1.begin();
    while (p!=v1.end())
    {   
        if(*p%2==0)
        p=v1.erase(p);
        else
        p++;
    }

    while (q!=l1.end())
    {
        if(*q%2!=0)
        q=l1.erase(q);
        else
        q++;
    }
   

    for(int n:v1)
    cout << n << " ";
    cout << endl;
     for(int n:l1)
    cout << n << " ";

    cin.get();
    cin.get();
    return 0;

}