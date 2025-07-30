#include<iostream>
#include<cstring>

int main()
{   
    using namespace std;
    char c1[]="abcd.";
    char c2[]="efgh.";

    int length=strlen(c1)+strlen(c2)+1;
    char * c3=new char[length];
    strcpy(c3,c1);
    strcat(c3,c2);
    cout << c3;
    cin.get();
    cin.get();
    return 0;
}