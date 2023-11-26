#include<iostream>
#include<string>
#include<new>
   
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
  
 const int BUF=512;
 double*p1=new double[BUF];
 char*p2=new char[BUF];
 double *p3=new(p2)double[BUF];

delete[]p1;
 delete[]p3;

 cout << (void*)p2 << endl;

 cout << (void*)p3;
 

  cin.get();
  cin.get();
  return 0;
}

