#include<iostream>     //利用递归函数求阶乘  n!=n*(n-1)!
using namespace std;
long double jiecheng(int);
int main()
{
    int number;
    cout << "Please enter a integer(q to quit): " << endl;
    while(1>0)
    {
        cin >> number;
        if(!cin)
        {
            cin.clear();
            if(cin.get()=='q')
            break;
            else
            {
                while(cin.get()!='\n')
                continue;
                cout << "Please enter integer: ";
                continue;
            }
        }
        cout << "The jiecheng is :" << jiecheng(number) << endl;
        cout << "Please enter another integer(q to quit): " << endl;
    
    }
cout << "It is done.";
cin.get();
cin.get();
return 0;
}
long double jiecheng(int n)
{   
   
    if(n==0)
    return 1;
    else if(n>0)
    return n*jiecheng(n-1);
    else
    return 0.0; 
}
