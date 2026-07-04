#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i=10;
    [i]()mutable{
        while(i>0) i--;
        cout << "i=" << i << endl;
        return i==0;
    };
    if(i!=0)
    cout << "i!=0.\n";
    cout << "i=" << i << endl;
    cin.get();
    return 0;
}