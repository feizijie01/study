#include<iostream>
#include<string>

int main()
{
    using namespace std;
    int grade;
    grade=3;
    string finalgrade;
    if(grade < 60)
    finalgrade="fail";
    else if(grade < 75)
    finalgrade="lowpass";
    else if(grade < 90)
    finalgrade="pass";
    else
    finalgrade="highpass";
    cout << grade << " : " << finalgrade;
    cin.get();
    return 0;
}