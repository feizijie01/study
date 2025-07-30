#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    cout << "Enter the integers: \n";
    vector<int>v1;
    int temp;
    while (cin >> temp)
    {
        v1.push_back(temp);
        if(cin.peek()=='\n')
        break;
    }
    cout << "The sum of two integers at the beginning and end: \n";
    for(auto p=v1.begin(),q=v1.end()-1;p<=q;p++,q--)
    {
        cout << *p + *q << endl;
    }
    cin.get();
    cin.get();
    return 0;
}