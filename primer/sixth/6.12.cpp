#include<iostream>
void switchint(int & m1,int & n1)
{
    int temp;
    temp=m1;
    m1=n1;
    n1=temp;
}
int main()
{
    using namespace std;
    int m = 2,n = 6;
    cout << "Before switch: \n";
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    int & m1=m;
    int & n1=n;
    switchint(m1,n1);
    cout << "after switch: \n";
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    cin.get();
    return 0;
}