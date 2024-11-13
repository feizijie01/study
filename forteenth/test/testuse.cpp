#include<iostream>
#include"test.h"
using std::cin,std::endl,std::cout;

main()
{
    Jicheng j1(Max);
    cout << "Please enter student's name: ";
    cin >> j1;
    cout << "Please enter student's scores: ";
    for(int i=0;i<Max;i++)
    {
        cout << "#" << i+1 << ": ";
        cin >> j1[i];
    }
    cout <<"Result: \n";
    cout << j1;
    cin.get();
    cin.get();
    return 0;
}
