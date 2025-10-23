#include<iostream>
void switchshu(int * p1,int * p2)
{   
    
    int  temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    using namespace std;
    int n=6,m=2;
    cout << "n=" << n << endl;
    cout << "m=" << m << endl;
    cout << endl;
    int * pn=&n;
    int * pm=&m;
    switchshu(pn,pm);
    cout << "after switch\nn= " << n <<"\nm=" << m << endl;
    cin.get();
    cin.get();
    return 0; 
}