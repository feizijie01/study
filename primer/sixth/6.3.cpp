#include<iostream>
int main()
{
    using namespace std;
    int ret=1;
    int m,n;
    cout << "Please enter the n to get the fact of n(only for int): ";
    cin >> n;
    m=n;
    while(n>1)
    {
        ret=ret*n;
        n--;
        
    }
    cout << m << " fact is " << ret;
    cin.get();
    cin.get();
    return 0;
}