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
}

void biggies(vector<string> & words,vector<string>::size_type sz)
{
    elimDups(words);

    stable_sort(words.begin(),words.end(),[]
(const string & a,const string & b){return a.size()<b.size(); });

    auto p=find_if(words.begin(),words.end(),[sz](string & s){s.size()>=sz;});

    auto count=words.end()-p;
    cout << count << " " << "words" << " of length " << sz << " or longer " << endl;
    for_each(words.begin()+count,words.end(),[](const string & s){cout << s << " ";});
}


int main()
{

}