#include<iostream>
#include<cstring>
using namespace std;
template<typename T>
T maxn(T arr[],int n);

template<>
const char*  maxn<const char* >(const char*arr[] ,int n);

template<>
char*  maxn<char* >(char*arr[] ,int n);

int main()
{   
    int arr1[6]={1,2,3,4,5,6};
    double arr2[4]={1.1,2.2,3.3,4.4};
    char* arr3[5]={
        "a",
        "hijkl",
        "def",
        "bc",
        "lmno",
    };
    
    cout << maxn(arr3,4) << endl;
    cin.get();
    return 0;
}


template<>             //模板b  显式具体化  带const的形参
const char*  maxn<const char* >(const char* arr[] ,int n)  //此处测试了很多次了，具体化非const指针实参只能赋值于非const形参
{                                                          //const指针实参只能赋值给const形参，无论是1级还是2级指针。
    const char*  pm=arr[0];                                //所以如果实参是const，乖乖用const指针形参吧。
                                                           //引用的话,使用了int& const int& ，也是类似结果。
    for(int i=0;i<n;i++)
    {
        if(strlen(pm)<strlen(arr[i]))
        pm=arr[i];
    }
    return pm;
}

