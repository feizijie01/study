#include<iostream>
using namespace std;
template<typename T>
void SumArray(T* arr[],int n);

template<typename T>
void SumArray(T*arr,int n);

struct debts{
    char name[50];
    double amount;
};

int main()
{
    int things[6]={13,31,103,301,310,130};
    int * pd[6];
    for(int i=0;i<6;i++)
    pd[i]=&things[i];
    debts mr_E[3]={
        {"Ima Wolfe",2400.1},
        {"Ura Foxe",1300.0},
        {"Iby Stout",1800.0}
    };
    cout << "Mr_E all debts are: " ;
    SumArray(mr_E,3);
    cout << endl;
    cout << "All things are: ";
    SumArray(pd,6);
    cin.get();
    return 0;
}

template<typename T>
void SumArray(T* pd[],int n)
{
    int total=0;
    do{
    total = total + *pd[--n];}
    while(n); 
    cout << total << endl;
}

template<typename T>
void SumArray(T*arr,int n)
{
   double total=0.0;
   do{
    total+= arr[--n].amount;
   }while(n);
   cout << total << " dollars." << endl;
}