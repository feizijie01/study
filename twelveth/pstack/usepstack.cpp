#include"pstack.h"
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
int main()
{
    Stack s1;
    Stack s2(5);
    int i=1;
    while(!s1.isfull())
    {   
        
        s1.push(i);
        i++;
    }
    Stack s3(s1);
    Stack s4=s1;
    while(!s1.isempty())
    {   
        for(int n=0;n<i;n++)
        {
            Item items[i];
            s1.pop(items[n]);
        }
    }
    s1.Show();
    cout <<endl;
    s2.Show();
    cout << endl;
    s3.Show();
    cout << endl;
    s4.Show();
    cout << endl;
    cin.get();
    cin.get();
}