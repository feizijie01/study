#include<iostream>
#include<vector>
#include<string>
int main()
{
    using namespace std;
    int grade;
    cout << "Please enter grade: ";
    cin >> grade;

    vector<string>v1={"F","D","C","B","A","A++"};
    string score=v1[0];
    score=grade==100?v1[5]:
    (grade>=60?v1[(grade-50)/10]:"D");
    cout << "Score: " << score << endl;
    cin.get();
    cin.get();
    return 0;

}