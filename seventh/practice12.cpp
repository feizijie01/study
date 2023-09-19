#include<iostream>    // 创建一个指针数组，这种指针指向add()样式的函数。
using namespace std;  
const int Max=2;
double calculate(double a,double b, double (*pa)(double a,double b));
double add(double,double);
double cheng(double,double);
int main()
{   
    double x,y;
    while(1>0)
{    cout << "Please enter two number in double(bad input will quit): ";
    cin >> x >> y;
      if(!cin)
    {
    cin.clear();
    while(cin.get()!='\n')
    continue;
    break;
    }
    //这是不创建数组时候的策略，函数的数量不多的时候比较适合。
    //double q1 =calculate(x,y,add);
    //double q2 =calculate(x,y,cheng);
    //cout << "x+y= " << q1 << endl;
    //cout << "x*y= " << q2 << endl;

    double (*pf[2])(double,double)={add,cheng};  //利用数组初始化的语法进行声名，利用函数名作为函数地址进行初始化
    for(int i=0;i<Max;i++)                       // 利用循环对该数组元素（即add类型函数）进行调用。
    {
      double q=calculate(x,y,pf[i]);
      cout << "q" << i+1 << ": " << q << endl << endl;  
    }
  
}
   cout << "DONE."  << endl;
   cin.get();
   cin.get();

}
double add(double x,double y)
{
    return x+y;
}
double cheng(double x, double y)
{
    return x*y;
}

double calculate(double x,double y,double(*p)(double a,double b))
{
  double a=x;
  double b=y;
  return p(a,b);
}