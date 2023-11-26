#include<iostream>
using namespace std;


int main()
{
    
    

 double sarr[4];
    for(int i=0;i<4;i++)
    {
        cout << "Q" << i+1 << ": ";
        cin >> sarr[i];
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
            continue;
            cout << "Please enter the double." << endl;
            cout << "i= " << i << endl;
            continue;
        }
        
    }
}