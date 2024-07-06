#include"practice3.h"
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
    int rating1;
    
    char  color1[40];

    char style1[40];
    
    for(int i=0;i<MODE;i++)
    {
        cout <<"Please enter mode: ";
        cin >>mode;
        cin.get();
        
        if(mode=='a')
        {
        cout << "Please enter label: ";
        cin.getline(label1,39);
        cout << "Please enter rating: ";
        cin >> rating1;
       
        Pa[i]=new baseDMA(label1,rating1,'a');
        cout << "aaaaaaaaaaaaaaaaa\n" << endl;
        }
        else if(mode=='b')
        {   
            
            cout << "Please enter color: ";
            cin.getline(color1,39);
            
            Pa[i]=new lacksDMA(color1,'b');
               
            
            cout << "bbbbbbbbbbbbbbbbb\n" << endl; 
        }
        else if(mode=='c')
        {
            cout <<"Please enter style: ";
            cin.getline(style1,39);
            
            Pa[i]=new hasDMA(style1,'c');
            
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

    for(int i=0;i<MODE;i++)
    {
        delete Pa[i];
    }
    cin.get();
    cin.get();
    return 0;
}