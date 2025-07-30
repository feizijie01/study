#include<iostream>
#include<iterator>
int main()
{   
    using namespace std;
    int ar[10];
    for(auto p=begin(ar);p!=end(ar);p++)
    *p=0;
    for(int i=0;i<10;i++)
    cout << ar[i] << endl;
    cin.get();
    cin.get();
    return 0;
}