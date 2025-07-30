#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    cout << "Enter the words:\n";
    string word;
    vector<string>v1;
    while (cin >> word)
    {
        v1.push_back(word);
        if(cin.peek()=='\n')
        break;
    }
    for(auto &s:v1)
    {
        for(auto &c:s)
        {
            c=toupper(c);
        }
        cout << s << endl;
    }
    cin.get();
    cin.get();
    return 0;
    
}

/*

vector<string>v1;
    while (cin >> word)
    {
        v1.push_back(word);
        if(cin.peek()=='\n')
        break;
    }
    for(auto &s:v1)
    {
        for(auto &c:s)
        {
            tolower(c);
        }
        auto &c=*s.begin();
        tolower(c);
        cout << s << endl;
    }

*/
