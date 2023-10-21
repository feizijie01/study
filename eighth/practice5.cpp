#include<iostream>
template<typename T>
T max5(T arr[]);
using namespace std;
int main()
{
  int intarr[5]={1,2,3,4,5};
  double douarr[5]={1.1,2.2,3.3,4.4,5.5};
  cout << max5(intarr) << endl;
  cout << max5(douarr) << endl;
  cin.get();
  return 0;
}
template<typename T>
T max5(T arr[])
{   
    T max = 0;
    for(int i=0;i<4;i++)
    max=max>arr[i]?max:arr[i];
    return max;
}
