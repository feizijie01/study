#include<iostream>
#include"practice3.h"
#include<cstring>
using std::cin;
using std::endl;
using std::cout;

Golf::Golf(const char*fn,int n)
{
  strncpy(name,fn,Len);
  handi=n;
}
Golf::Golf()
{
    name[0]='\0';
    handi=0;
}

int Golf::setgolf()
{
  Golf g1;
  cout << "Please enter the name: ";
  cin.getline(g1.name,Len); 
  if(g1.name[0]=='\0')
  return 0;
  else
  {
  cout << "Please enter the handicap(int): ";
  while(!(cin >> g1.handi))
  { 
    cin.clear();
    while(cin.get()!='\n')
    continue;
    cout << "Please enter int: ";
  }
  cin.get();
  *this = g1; 
  return 1;
  }
}
void Golf::showgolf()
{
  cout << "Name: " << (*this).name << endl
       << "Handicap: " << (*this).handi << endl;
}
