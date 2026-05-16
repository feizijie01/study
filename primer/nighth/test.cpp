#include<iostream>
#include<string>
#include<cctype>
#include<stack>
#include<unordered_map>
using namespace std;

void eval(stack<int>& nums,stack<char>& ops)
{
    char c=ops.top();ops.pop();
    int a=nums.top();nums.pop();
    int b=nums.top();nums.pop();
    int res=0;
    if(c=='+') res=a+b;
    else if(c=='-') res=a-b;
    else if(c=='*') res=a*b;
    else if(c=='/') res=a/b;
    nums.push(res);
}