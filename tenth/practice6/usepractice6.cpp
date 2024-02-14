#include<iostream>
#include"practice6.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    double a,b;
    cout << "Please enter x: ";
    cin >> a;
    cout << "Please enter y: ";
    cin >> b;
    Move m1=Move(a,b);
    cout << "The move is : " << endl;
    m1.showMove();
    cout << endl;
    cout << "If it x add 1 and y add 1. Then"<< endl;
    Move m2=Move(1,1);
    Move m3=(m1.add(m2));
    m3.showMove();
    cout << endl;
    cout << "If reset them." << endl;
    m3.reset();
    m3.showMove();
    cin.get();
    cin.get();
}