#include<iostream>
#include"practice5.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Please enter 'P' to add,'D' to delete a structure.";
    cout << "And 'Q' to quit."<< endl;
    char ch;
    Stack s1;
    customer c1;
    
    while(cin >> ch && toupper(ch)!='Q')
    {
        if(!isalpha(ch))
        {
            cout << "Please enter alpha."<< endl;
            continue;
        }

        switch(ch)
        {
        case 'P':
        case 'p':if(s1.isfull())
                 {
                    cout << "It is full.";
                 }
                 else
                 {  
                    cout << "Please enter the fullname: ";
                    cin.get();
                    cin.getline(c1.fullname,35);
                    cout << "Please enter the payment: ";
                    cin >> c1.payment;
                    s1.push(c1);
                 }
            break;
        
        case 'D':
        case 'd': if(s1.isempty())
             {
                cout << "It is empty.";
             }
             else
             {
                s1.pop(c1);
             }
            break;   
        
        default:
            break;
        }
        cout << "Please enter 'P' to add,'D' to delete a structure.";
    cout << "And 'Q' to quit."<< endl;
    }
    cout << "BYE.";
    cin.get();
    cin.get();
}