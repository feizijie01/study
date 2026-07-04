#include<iostream>
#include<string>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
using namespace std::placeholders;

bool check_size(string & s,int n)
{
    return n>s.size();
}

int main()
{
    cout << "Enter the word: ";
    string word;
    cin >> word;
    cin.get();
    vector<int> sizenum={1,2,3,4,5,6,7,8,9,10};
    auto checkcheck=bind(check_size,word,_1);
    auto p =find_if(sizenum.begin(),sizenum.end(),checkcheck);
    cout << "The first int bigger than word'size is " << *p << endl;
    cin.get();
    return 0;
}