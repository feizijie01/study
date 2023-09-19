// strgfun.cpp -- functions with a string argument
#include<iostream>
using namespace std;
unsigned int c_in_str(const char*str,char ch);
int main()
{
  char mmm[15]="minimummmmmmmm"; //string in an array
  // some systems require preceding char with static to enable array initialization

  const char *wail = "ululate"; // wail points to string

  unsigned int ms=c_in_str(mmm,'m');
  unsigned int us =c_in_str(wail,'u');

  cout << ms << " m characters in " << mmm << endl;
  cout << us << " u characters in " << wail << endl;
  cin.get();
  return 0;
}

unsigned int c_in_str(const char*str,char ch)
{
    unsigned int count =0;
    while(*str)    // quit when *str is '\0'
    {
        if (*str==ch)
        count++;
        str++;
    }
    return count;
}
