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
    cout << "The sum of two adjacent integers: \n";
    for(auto p=v1.begin();p!=v1.end()-1;p++)
    {
        cout << *p+*(p+1) << endl;
    }
    cin.get();
    cin.get();
    return 0;
}