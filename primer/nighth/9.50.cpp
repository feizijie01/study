#include<iostream>
#include<vector>
#include<string>
int main()
{
    using namespace std;
    vector<string> v1={"1","2","3","-4","5w"};
    vector<string> v2={"1.1","2.2","3","+4.5","5.3w"};
    int totali=0;
    double totald=0.0;
    for(string s:v1)
    {
        totali+=stoi(s);
    }

    for(string s:v2)
    {
        totald+=stod(s);
    }

    cout << totali << endl;
    cout << totald << endl;
    cin.get();
    cin.get();
    return 0;
}