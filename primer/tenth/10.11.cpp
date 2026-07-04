#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool isShorter(const string & s1,const string & s2)
{
    return s1.size() < s2.size();
}

int main()
{
    vector<string> words;
    string word;
    while(cin >> word)
    {
        if(word=="end")
        break;
        words.push_back(word);
    }

    stable_sort(words.begin(),words.end(),isShorter);
    for(string s:words)
    cout << s << " ";
    cin.get();
    cin.get();
    return 0;
}