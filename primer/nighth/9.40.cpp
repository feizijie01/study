#include<iostream>
#include<vector>
#include<string>
int main()
{
    using namespace std;
    vector<string>svec;
    svec.reserve(1024);
    svec.resize(768);
    cout << svec.capacity() << endl;
    svec.resize(1500);
    cout << svec.capacity() << endl;
    cin.get();
    return 0;
}