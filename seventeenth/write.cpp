#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    const char*s1="computer";
    const char*s2="community";
    const char*s3="apple";

    int len=strlen(s2);

    cout << "Incresing:\n";
    for(int i=0;i<len;i++)
    {
        cout.write(s2,i);
        cout << endl;
    }
    cout << "Decresing:\n";
    for(int i=len;i>=0;i--)
    {
        cout.write(s2,i);
        cout << endl;
    }
    cout <<"Exceeding:\n";
    cout.write(s2,len+4);
    cin.get();
    cin.get();
    return 0;
}