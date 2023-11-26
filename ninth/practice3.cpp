#include<iostream>
#include<new>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    char huanchong1[128];

    chaff *strArr=new(huanchong1) chaff[2];
    const char name1[20]="a";
    const char name2[20]="b";
    strcpy(strArr[0].dross,name1);
    strArr[0].slag=1;
    strcpy(strArr[1].dross,name2);
    strArr[1].slag=2;

    for(int i=0;i<2;i++)
    cout << strArr[i].dross << " " << strArr[i].slag << endl;
    
    cin.get();
    cin.get();
    return 0;
}