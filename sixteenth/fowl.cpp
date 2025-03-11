// fowl.cpp -- auto_ptr a poor choice
#include<iostream>
#include<string>
#include<memory>
using namespace std;
int main()
{
    auto_ptr<string>films[5]={
        auto_ptr<string>(new string("Fowl Balls")),
        auto_ptr<string>(new string("Duck Walks")),
        auto_ptr<string>(new string("Chicken Runs")),
        auto_ptr<string>(new string("Turkey Errors")),
        auto_ptr<string>(new string("Goose Eggs")),
    };

    auto_ptr<string>pwin;
    pwin=films[3];

    for(int i=0;i<5;i++)
    cout << *films[i] << endl;
    cout << "The winner: " << *pwin << endl;
    cin.get();
    cin.get();
    return 0;
}