#include<iostream>
int main()
{
    using namespace std;
    double a,b;
    do{
    if(cin >> a >> b)
    {cout << a << b;
    continue;}
    else
    cin.clear();
    if(cin.get()=='q')
    break;
    while(cin.get()!='\n')
    continue;
    
    }while(cin.get()!='q');
    cout << "111" << endl;
    cin.get();
    cin.get();
    
    return 0;
}