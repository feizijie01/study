#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    cout << "Please enter the words(end to quit): ";
    string word;
    vector<string>words;

    while(cin >> word)
    {   
        if(word=="end")
        break;
        auto p=find(words.begin(),words.end(),word);
        if(p==words.end())
        words.push_back(word);
    }
    
    cout << "Words: \n";
    for(string w:words)
    cout << w << endl;
    cin.get();
    cin.get();
    return 0;
}