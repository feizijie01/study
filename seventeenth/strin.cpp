#include<iostream>
#include<sstream>
#include<string>

int main()
{
    using namespace std;
    string lit="a apple is very sweet.";
    istringstream instr(lit);
    string word;
    while(instr >> word)
    cout << word << endl;
    cin.get();
    cin.get();
    return 0;
}