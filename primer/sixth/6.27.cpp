#include<iostream>
#include<initializer_list>
using namespace std;
int intsum(initializer_list<int> li)
{
    int sum=0;
    for(const int & n:li)
    {
        sum+=n;
    }
    return sum;
}