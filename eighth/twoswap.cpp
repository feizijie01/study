// twoswap.cpp -- specialization overrides a template
#include<iostream>
using namespace std;
template<typename T>
void Swap(T &a,T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// explicit specialization

void Show(job &);
template void Swap<job>(job & j1, job & j2);
 template <> void Swap<char>(char &,char &);
int main()
{
   
    cout.precision(2);
    cout.setf(ios::fixed,ios::floatfield);
    int i=10,j=20;
    cout << "i,j = " << i << "; " << j << ".\n";
    cout << "Using compiler-generated innt swapper:\n";
    Swap(i,j);    //generates void Swap(int&,int&)
    cout << "Now i,j = " << i << ", " << j << ".\n";

    job sue = {"Susan Yaffee", 73000.60,7};
    job sidney = {"Sidney Taffee",78060.72,9};
    cout << "Before job swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue,sidney);  // uses void Swap(job&,job&)
    cout << "After job swapping:\n";
    
    Show(sue);
    Show(sidney);
    cin.get();
    return 0;
}

template<typename T>
void Swap(T&a,T&b)   //general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swap just the salary and floor fields of a job structure

template <> void Swap<job>(job & j1, job & j2)  // specialization
{
   double t1;
   int t2;
   t1 = j1.salary;
   t2 = j1.floor;
   j1.salary=j2.salary;
   j1.floor = j2.floor;
   j2.salary=t1;
   j2.floor = t2;
}


void Show(job &j)
{
    cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}