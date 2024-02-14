#include<iostream>
#include<string>
using namespace std;
class Stack{
  private:
  int top;
  public:
  Stack(int top);
};
int main()
{
  Stack(1);
  cin.get();
  cin.get();
  return 0;
}
Stack::Stack(int top)
{
  top=1;
  cout << top;
}