#include<iostream>
#include"practice3.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Golf golfarr[10];
    int n=0;
    for(int i=0;i<10;i++)
    {
        if(golfarr[i].setgolf())
        {   
            if(i==9)
            n=i+1;
            continue;
        }     
        else
        {
            n=i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    golfarr[i].showgolf();
    cin.get();
    cin.get();
    return 0;
}
