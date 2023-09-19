#include<iostream>
const int len=731;
const int level=6;
using namespace std;
void digui(char ar[],int low,int high,int level);
int main()
{
    char ruler[len];
    for(int i=1;i<len-2;i++)
    ruler[i]=' ';
    ruler[len-1]='\0';
    int min=0;
    int max=len-2;
    ruler[min]=ruler[max]='|';
    cout << ruler << endl;
    for(int i=1;i<=level;i++)
    {digui(ruler,min,max,i);
    cout << ruler << endl;
    for(int j=1;j<len-2;j++)
    ruler[j]=' ';
    }
    
    cin.get();
    return 0;
}
void digui(char ar[],int low,int high,int level)
{
    if(level==0)
    return;
    int mad = low+(high-low)/3;
    int mbd = mad+(high-low)/3;
   
    ar[mad]='|';
    ar[mbd]='|';
    digui(ar,low,mad,level-1);
    digui(ar,mad,mbd,level-1);
    digui(ar,mbd,high,level-1);
   
}
