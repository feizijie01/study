//left.cpp -- string function with a default argument
#include<iostream>
#include<cstring>
const int ArSize = 10;
char*left(const char*str,int n=1);
using namespace std;
int main()
{
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample,ArSize);
    char*ps = left(sample,4);
    cout << ps << endl;
    delete []  ps;   // free old string
    ps = left(sample);
    cout << ps << endl;
    delete [] ps ;    //free new string
    cin.get();
    cin.get();
    return 0;
}

// This function returns a pointer to a new string
// consisting of the fisrt n characters in the str string.

char*left(const char*str,int n)
{
    if(n<0)
    n=0;
    int m=0;
    while(m<n && str[m])
    m++;
    char *p=new char[m+1];
    int i;
    for(i=0;i<m;i++)
    p[i]=str[i];
    p[i]='\0';
        return p;
     
}