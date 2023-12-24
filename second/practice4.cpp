#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
   cout << "Enter your age: ";
   int age;
   cin >> age;
   cout << "It contains " << age*12 << " months.";
   cin.get();
   cin.get();
   return 0;
}