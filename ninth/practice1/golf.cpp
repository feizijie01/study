#include<iostream>
#include<cstring>
#include"golf.h"
using std::cout;
using std::endl;
using std::cin;
void setgolf(golf&g,const char*name,int hc)
{
    strncpy(g.fullname,name,Len-1);
    g.handicap=hc;
}

int setgolf(golf&g)
{
    cout << "Please enter the name: ";
    if(!cin.get(g.fullname,Len-1))
    cin.clear();
    g.fullname[strlen(g.fullname)]='\0';
    if(g.fullname[0]=='\0')
    return 0;
    cout << "Please enter the handicap: ";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf&g,int hc)
{
    g.handicap=hc;
}

void showgolf(const golf&g)
{
    cout << "name: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
    cout << endl;
    cout << endl;
}