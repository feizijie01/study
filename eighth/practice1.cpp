#include<iostream>
using namespace std;
void print(const char*,int=0);
int n=0;
int main()
{
  
  print("hello");
  print("hi",1);
  print("hi",1);
  cin.get();
  return 0;
}


void print(const char*p,int a)
{
    if (a==0)
    {
    cout << p << endl;
    }

    else
    {
    for(int i=0;i<n;i++)
    cout <<  p << endl;
    }
    
    n++;
}