//修改程序7.15，使用const char*数组来储存 季度名称   b版本
#include<iostream>
using namespace std;
const int seasons=4;
struct kaizhijiegou{
    double kai [seasons];
};
kaizhijiegou kaizhi;
const char* jidu[seasons]={"Spring","Summer","Fall","Winter"};

void fill(kaizhijiegou *p1);
void show(const kaizhijiegou*p2);
int main()
{
    cout << "Please enter last year's expenses: " << endl;
    fill(&kaizhi);
 
    cout << "So the expenses are: " << endl;
    show(&kaizhi);    
    cin.get();
    cin.get();
    return 0;
}

void fill(kaizhijiegou*p1)
{
    for(int i=0;i<seasons;i++)
    {
        cout << jidu[i] << ": ";
        cin >> p1->kai[i];    
    }
 

}

void show(const kaizhijiegou*p2)
{
    double total =0;
    for(int i=0;i<seasons;i++)
    {
        cout << jidu[i] << ": " << p2->kai[i] << endl;
        total+=p2->kai[i];
    }
    cout << "The total expenses: " << total;
}