#include<iostream>
#include<string>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
using namespace std::placeholders;

bool select(string & s,string::size_type n)
{
    return s.size()>=n;
}

int main()
{   
    cout << "Please enter the upsize u want to select: ";
    int n;
    cin >> n;
    cout << "Please enter the words: (end to quit): \n";
    vector<string>words;
    string word;
    while(cin >> word)
    {
        if(word=="end")
        break;
        words.push_back(word);
    }

    auto choose=bind(select,_1,n);
    auto total =count_if(words.begin(),words.end(),choose);
    
    cout << "There are " << total  << " words here with a size greater than or equal to " << n;
    cin.get();
    cin.get();
    return 0;
}
