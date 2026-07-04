#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string & s,int n)
{
    return s.size()<n;
}

void elimdup(vector<string> & words)
{   
    cout << "Original: ";
    for(string  s0:words)
    cout  << s0 << " ";
    cout << endl;

    cout << "After unique: ";
    auto p=unique(words.begin(),words.end());
    for(string s1:words)
    cout << s1 << " ";
    cout << endl;

    cout << "After erase: ";
    words.erase(p,words.end());
    for(string s2:words)
    cout << s2 << " ";
    cout << endl;
}

void biggies(vector<string> & words,int n)
{
    elimdup(words);

    stable_sort(words.begin(),words.end(),[](const string & s1,const string & s2)
    {return s1.size()>s2.size();});
    
    auto selected=bind(check_size,_1,n);
    auto p =find_if(words.begin(),words.end(),selected);

    int counts=p-words.begin();
    cout << "There are "<< counts << " words with the  size greater than " << n << endl;
    for(auto q=words.begin();q!=p;q++)
    cout << *q << " ";
    cout << endl;
}

int main()
{   
    string s;
    vector<string>words;
    int sz;
    cout << "Please enter the size want to select: ";
    cin >> sz;
    cout << "Please enter the words(end to quit): \n";
    while(cin >> s)
    {
        if(s=="end")
        break;
        words.push_back(s);
    }
    
    biggies(words,sz);
    cin.get();
    cin.get();
    return 0;
 
}