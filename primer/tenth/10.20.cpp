#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
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
    cout << endl;
}

void biggies(vector<string> & words,vector<string>::size_type sz)
{
    elimDups(words);

    stable_sort(words.begin(),words.end(),[]
(const string & a,const string & b){return a.size()<b.size(); });
   

    auto p=count_if(words.begin(),words.end(),[sz](string & s){return s.size()>=sz;});

    cout << p << " " << "words" << " of length " << sz << " or longer " << endl;
    for_each(words.begin(),words.end(),[=](const string & s){if(s.size()>=sz) cout << s << " ";});
}


int main()
{
    cout << "please enter the string words(end to quit): ";
    vector<string>words;
    string word;
    while(cin >> word)
    {
        if(word=="end")
        break;
        words.push_back(word);
    }
    biggies(words,6);
    cin.get();
    cin.get();
    return 0;
}