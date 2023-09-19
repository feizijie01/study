#include<iostream>
const int Max=5;
using namespace std;
int fanhui(double ar[],int limit);
void zhanshi(const double ar[],int n);
void zengjian(double factor,double ar[],int n);
int main()
{ 
  double properties[Max];
  int size=fanhui(properties,Max);
  zhanshi(properties,size);
  if (size > 0)
{
  double factor;
  cout << "Please enter the factor: ";
  while(!(cin >> factor))
  {
    cin.clear();
    while(cin.get()!='\n')
    continue;
    cout << "Please enter a number.";
  };
  zengjian(factor,properties,size);
  zhanshi(properties,size);
  cin.get();
}
  cout << "Done.\n";
  cin.get();
  cin.get();
}
int fanhui(double ar[],int limit)
{
    int i;
    double temp;
    for(i=0;i<limit;i++)
    {   
        cout << "Enter the value #" << (i+1) << ": $";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
            continue;
            cout << "Input error, program ended.";
            break;
        }
        else if(temp < 0)
        break;
        ar[i]=temp;
    }
    return i;
}
void zhanshi(const double ar[],int n)
{ 
  int i;
  for(i=0;i<n;i++)
  cout << "#" << (i+1)  << ": $"<< ar[i] << endl;
}
void zengjian(double r,double ar[],int n)
{
  int i;
  for(i=0;i<n;i++)
  ar[i]*=r;
}