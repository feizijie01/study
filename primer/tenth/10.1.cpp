#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   
    cout << "Please enter some numbers: ";
    vector<int>v;
    int n=0;
    while(cin >> n && cin)
    {   
        v.push_back(n);
    }
    cout << n << endl;
    
    if(!cin)
    {
        cin.clear();
        while(cin.get()!='\n')
        continue;
    }

    cout << "Enter the value want to count: ";
    int value,counts;
    cin >> value;
    counts=count(v.begin(),v.end(),value);
    cout << value << " appear " << counts << " times.";
    cin.get();
    cin.get();
    return 0;
}