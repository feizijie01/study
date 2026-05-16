//编写函数，接受一对指向vector<int>的迭代器和一个int值。
//在两个迭代器指定的范围中查找给定的值，返回一个布尔值指出是否找到
#include<iterator>
#include<vector>
using namespace std;
bool Findit(vector<int>::iterator begin,vector<int>::iterator end,int n)
{
    while(begin!=end)
    {
        if(*begin == n)
        return true;
        else
        begin++;
    }
    return false;
}