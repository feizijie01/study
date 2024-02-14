#include<iostream>
#include"practice5.h"
using std::cout;

bool Stack::isempty() const
{
   return top==0;
}

bool Stack::isfull() const
{
    return top==Max;
}

bool Stack::push(const Items & i1)
{
    if(top<Max)
    {
        items[top++]=i1;
        return true;
    }
    else
    return false;
}

bool Stack::pop(Items &i2)
{
    if(top>0)
    {
        i2=items[--top];
        total += items[top].payment;
        cout << "Total is " << total << std::endl;
        return true;
    }
    else
    return false;
}