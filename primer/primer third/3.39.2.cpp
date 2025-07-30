#include<iostream>
#include<cstring>

int main()
{
    using namespace std;
    char c1[]="abcde.";
    char c2[]="ar.";
    if(strcmp(c1,c2)>0)
    cout << c1 << " > " << c2;
    else if(strcmp(c1,c2)<0)
    cout << c1 << " < " << c2;
    else if(strcmp(c1,c2)==0)
    cout << c1 << " == " << c2;
    cin.get();
    cin.get();
    return 0;
}