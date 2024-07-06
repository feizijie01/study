#include"test.h"        
#include<iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
const int MODE=3;

int main()
{
    using std::cout,std::endl,std::cin;
    ABC * Pa[MODE];
    char  mode;

    char  label1[40];

    
    char  color1[40];

    char style1[40];
    int cc;
    
    for(int i=0;i<MODE;i++)
    {
        cout <<"Please enter mode: ";
        cin >>mode;
        cin.get();
        
        if(mode=='a')
        {
        cout << "Please enter label: ";
        cin.getline(label1,39);
        baseDMA ba(label1,'a');
        Pa[i]=&ba;
        cout << "aaaaaaaaaaaaaaaaa\n" << endl;
        }
        else if(mode=='b')
        {   
            
            cout << "Please enter color: ";
            cin.getline(color1,39);
            lacksDMA la(color1,'b');
            Pa[i]=&la;
               
            
            cout << "bbbbbbbbbbbbbbbbb\n" << endl; 
        }
        else if(mode=='c')
        {
            cout <<"Please enter style: ";
            cin.getline(style1,39);
            cout << "Please enter CC: ";
            cin >> cc;
            hasDMA ha(style1,cc,'c');
            Pa[i]=&ha;
            
            cout << "ccccccccccccccccccccc\n" << endl; 
        }
        else
        {
            cout <<"Please enter a,b or c.\n";
            i--;
        continue;
        }
        
    }
    
    for(int i=0;i<MODE;i++)
    {
        Pa[i]->View();
    }
    cin.get();
    cin.get();
    return 0;
}