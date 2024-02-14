#include<iostream>
#include"practice2.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Person one;
    one.show();
    one.FormalShow();
    cout << endl;
    Person two = Person("Fei");
    two.show();
    two.FormalShow();
    cout << endl;
    Person three = Person("Fei","ZiJie");
    three.show();
    three.FormalShow();
    cin.get();
    return 0;
}