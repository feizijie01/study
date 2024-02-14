#include<iostream>
#include"practice8.h"
List::List()
{
    number=0;
}
void List::addList(Item & i1)
{
   if(!isfull())
   {
    items[number++]=i1;
    std::cout << number << std::endl;
   }
}

bool List::isempty()
{
    return number==0;
}

bool List::isfull()
{
    return number==Max;
}

void List::visit(void(*pf)(Item & ))   //(*pf)这里是函数指针相当于一个函数                           
{                                      //此函数以 “列表中的数据项的引用” 作为参数
   while(!isempty())
   {
    pf(items[--number]);
    std::cout << items[number] << std::endl;
   }
}

void pf(Item & i1)
{
    i1+=1;
    std::cout << i1 << std::endl;
}