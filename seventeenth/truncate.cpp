#include<iostream>
using namespace std;
inline void eatline(){while(cin.get()!='\n') continue;}
const int SLEN =10;
int main()
{
    char name[SLEN];
    char title[SLEN];

    cout << "Enter ur name:\n";
    cin.get(name,SLEN);
    if(cin.peek()!='\n')
    cout << "Sry we only have room for " << name << endl;
    eatline();

    cout << "Enter ur title:\n";
    cin.get(title,SLEN);
    if(cin.peek()!='\n')
    cout << "Sry we have to cut the line.\n";
    eatline();

    cout << "Name: " << name << endl;
    cout << "Title: "<< title << endl;
    cin.get();
    cin.get();
    return 0;
}