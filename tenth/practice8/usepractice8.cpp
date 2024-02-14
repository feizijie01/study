#include<iostream>
#include"practice8.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
    char ch;
    List l1;
    double data;    //数据项还不够通用，意思是说，如果数据项不一样，输入方式会有所不同。
    cout << "Please enter 'a'or'A' to add a data.'q' or 'Q' to quit." << endl;
    while(cin >> ch && toupper(ch)!='Q')
    {   
        while(cin.get()!='\n')
        continue;
        if(!isalpha(ch))
        {
            cout << "Please enter a alpha." << endl;
            continue;
        }
        switch(ch)
        {
            case 'a':
            case 'A':
            if(l1.isfull())
            {
                cout << "The list is full." << endl;
            }
            else
            {
                cout << "Please enter the data :" << endl;
                cin >> data;
                l1.addList(data);
            }
            break;

            case 'q':
            case 'Q':
            break;
        }
        cout << "Please enter 'a'or'A' to add a data.'q' or 'Q' to quit." << endl;
    }
    l1.visit(pf);
    cout << endl;
    cout << "Bye.";
    cin.get();
    cin.get();
}