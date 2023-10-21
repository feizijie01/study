#include<iostream>
using namespace std;
#include<cstring>   // for sren(),strcpy()
struct stringy{
     char*str;  //point to a string
     int ct;  //length of string(not counting '\0')
};

//prototypes for set(), show(), and show() go here
void set(stringy &,char*);
void show(const stringy &,int n=1);
void show(const char* ,int n=1);
int main()
{
    stringy beany;
    char testing[]="Reality isn't what it used to be.";

    set(beany,testing);  // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the new block,
    //copies testing to new block,
    //and sets ct member of beany
    show(beany);   // prints member string once
    show(beany,2);   // prints member string twice
    testing[0]='D';
    testing[1]='u';
    show(testing);  // prints testing string once
    show(testing,3);  // prints testing string thrice
    show("Done!");
    cin.get();
    return 0;
}

void set(stringy & str1,char* t1)
{
    char*p=new char[strlen(t1)];
    strcpy(p,t1);
    str1.str=p;
}

void show(const stringy &str1,int n)
{   
    while(n--)
    cout << str1.str << endl;
}
void show(const char*p,int n)
{   
    while(n--)
    cout << p << endl;
}