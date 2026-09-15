#include<unordered_map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    unordered_map<string,int>words;
    string word;
    while(cin >> word)
    {
        if(word=="end")
        break;
        words[word]++;

    }
    

    for(auto m:words)
    cout << m.first << ": " << m.second << endl;
    cin.get();
    cin.get();
    return 0;
}