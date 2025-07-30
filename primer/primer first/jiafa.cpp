#include<iostream>
using std::cin,std::cout,std::endl;

int main()
{
    int sum=0,value=50;
    while(value<=100)
    {
        sum+=value;
        value++;
    }
    cout << "Sum of 50~100 is " << sum << endl;
    cin.get();
    return 0;
}