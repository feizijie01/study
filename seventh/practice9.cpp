//修改程序7.15，使用const char*数组来储存 季度名称
#include<iostream>
using namespace std;
const int seasons=4;
const char* jidu[seasons]={"Spring","Summer","Fall","Winter"};
double kaizhi[seasons];
void fill(double ar[]);
void show(const double ar[]);
int main()
{
    cout << "Please enter last year's expenses: " << endl;
    fill(kaizhi);
    cout << "So the expenses are: " << endl;
    show(kaizhi);    
    cin.get();
    cin.get();
    return 0;
}

void fill(double ar[])
{
    for(int i=0;i<seasons;i++)
    {
        cout << jidu[i] << ": ";
        cin >> ar[i];
    }
}

void show(const double ar[])
{
    double total =0;
    for(int i=0;i<seasons;i++)
    {
        cout << jidu[i] << ": " << ar[i] << endl;
        total+=ar[i];
    }
    cout << "The total expenses: " << total;
}