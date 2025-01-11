// constcast.cpp -- using const_cast<>
#include<iostream>
using std::cout,std::cin,std::endl;
void change(const int *pt,int n);

int main()
{
    int pop1=30383;
    const int pop2=2000;

    cout << "pop1,pop2: " << pop1 << ", " << pop2 << endl;
    change(&pop1,-103);
    change(&pop2,-103);
    cout << "pop1,pop2: " << pop1 << ", "  << pop2 << endl;
    cin.get();
    cin.get();
    return 0;
}

void change(const int *pt,int n)
{
    int * pc;
    pc = const_cast<int *>(pt);
    *pc += n;
}