#include<iostream>
#include<string>

int main()
{
    using namespace std;
    int grade;
    grade=3;
    string finalgrade=
    (grade<60)?"fail":
    (grade<75)?"low pass":
    (grade<90)?"pass":"high pass";
    cout << grade << " : " << finalgrade;
    cin.get();
    return 0;
}