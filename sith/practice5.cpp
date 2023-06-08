#include<iostream>
#include<fstream>
#include<cctype>
int main()
{
  using namespace std;
  ifstream fcin;
  char name[20];
  cout << "Please enter the file's name: " << endl;
  cin >> name;
  fcin.open(name);
  int alnum=0;
  while(fcin)
  {
    if (isalnum(fcin.get()))
    alnum++;
  }
  if (fcin.eof())
  cout << "EOF;" << endl;
  cout << "The file is " << alnum << " chars.";
  cin.get();
  cin.get();
  return 0;
}