#include<iostream>
void Show1();
void Show2();
using std::cout;
using std::cin;
using std::endl;
int main()
{
    Show1();
    Show1();
    Show2();
    Show2();
    cin.get();
    return 0;
}

void Show1()
{
  cout << "Three blid mice" << endl;
  
}

void Show2()
{
    cout << "See how they run" << endl;
    
}