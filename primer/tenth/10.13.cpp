#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
bool fivealpha(string & s)
{
    return s.size()>=5;
}

int main()
{
    vector<string>words;
    string word;
    while(cin >> word)
    {
        if(word=="end")
        break;
        words.push_back(word);
    }

    auto p = partition(words.begin(),words.end(),fivealpha);
    for(auto q=words.begin();q!=p;q++)
    cout << *q << " ";

    
    cin.get();
    cin.get();
}