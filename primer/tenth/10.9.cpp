#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void elimDups(vector<string> words)
{
    sort(words.begin(),words.end());
    auto p=unique(words.begin(),words.end());
    cout << "After unique: ";
    for(string s1:words)
    cout << s1 << " ";
    cout << endl;
    words.erase(p,words.end());
    cout << "After erase: ";
    for(string s2:words)
    cout << s2 << " ";
}

int main()
{
    cout << "Please enter the words: \n";
    vector<string>words;
    string word;
    while (cin >> word)
    {      
        if(word=="end")
        break;
        words.push_back(word);
            
    }
    cout << "Words is : ";
    for(string s:words)
    cout << s << " ";
    cout << endl;
    sort(words.begin(),words.end());
    auto uniqueguo=unique(words.begin(),words.end());

    cout << "unique Words is : ";
    for(string s:words)
    cout << s << " ";
    cout << endl;
    words.erase(uniqueguo,words.end());
    cout << "erase Words is : ";
    for(string s:words)
    cout << s << " ";
    
    cin.get();
    cin.get();
}