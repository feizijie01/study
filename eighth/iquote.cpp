#include<iostream>   // 显示其用双引号括起的参数
#include<string>
using namespace std;
void Show(int);
void Show(double);
void Show(string);

int main()
{   
    int a =1;
    double b =2;
    string s1="abc";
    Show(a);
    Show(b);
    Show(s1);
    cin.get();
    return 0;
}

void Show(int n)
{
    cout << "\"" << n <<"\"" << endl;
}

void Show(double a)
{
    cout <<"\"" << a << "\"" <<endl;
}

void Show(string s1)
{
    cout << "\"" <<s1 <<"\"" << endl;
}


