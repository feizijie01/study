#include<iostream>
#include<string>
#include<vector>
int main()
{
    using namespace std;
    vector<string> v1={"F","D","C","B","A","A++"};
    int grades=0;
    string grade;
    cout << "Enter the grade(0~100): ";
    cin >> grades;
    if(grades==100)
    grade=v1[4];
    else if(grades<60)
    grade=v1[0];
    else
    {
        grade=v1[(grades-60)/10+1];
        if(grades%10>7)
        grade += '+';
        if(grades%10<3)
        grade += '-';
    }

    cout << grade;
    cin.get();
    cin.get();
    return 0;
}