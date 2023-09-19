// calling.cpp -- defiing,prottyping,and calling a function
#include<iostream>
using namespace std;
void simple();  // function prototype

int main()
{
    cout << "main() will call simple() function:\n";
    simple();  //function call
    cout << "main() is finished ith the simple() function.\n";
    // cin.get();
    cin.get();
    return 0;

}

// function definition
void simple()
{
    cout << "I'm but a simple function.\n";
}