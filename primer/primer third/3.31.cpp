#include<iostream>

int main()
{   
    using namespace std;
    int ar[10];
    for(int i=0;i<10;i++)
    {
        ar[i]=i;
        if(i==0)
        cout << ar[i];
        else
        cout  << " " << ar[i];
    }
    cin.get();
    cin.get();
    return 0;

}