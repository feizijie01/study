#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int main()
{
    map<string,size_t>word_count;
    string word;
    while(cin >> word)
    {   
        if(word == "end" or word == "End")
        break;
        if(isupper(word[0]))
        word[0]=tolower(word[0]);
        
        if(ispunct(*word.rbegin()))
        {   
            
            string ss(" ",word.size()-1);
            copy(word.begin(),word.end()-1,ss.begin());
            word = ss;
        }
        auto p=word_count.insert({word,1});
        if(!(p.second))
        ++p.first->second;
    }
    

    for(auto s:word_count)
    { 
        if(islower(s.first[0]) && !ispunct(*(s.first.rbegin())))
        cout << s.first << " occurs " << s.second << ((s.second>1)?" times.\n":" time. \n");
    }
    

    cin.get();
    cin.get();
    return 0;
}