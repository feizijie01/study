// static.cpp -- using a static local variable
#include<iostream>
// constants 
const int ArSize = 10;
// function prototype
using std::cout;
using std::cin;
using std::endl;
void strcount(const char*str);
int main()
{
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input,ArSize);
    while(cin)
    {
        cin.get(next);
        while(next!='\n') // string didn't fit
        cin.get(next);   //dispose of remainder
        strcount(input);
        cout << "Enter next line (emptyline to quit):\n";
        cin.get(input,ArSize);
    }
    cin.clear();
    while(cin.get()!='\n')
    continue;
    cout << "Bye\n";
    cin.get();
    cin.get();

    return 0;
}

void strcount(const char*str)
{
    static int total = 0;   // static local variable
    int count = 0;  // automatic local variable
    cout << "\"" << str << "\" contains ";
    while(*str++)    // go to end of string
    count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}