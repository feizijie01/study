#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<algorithm>
#include<iterator>

using namespace std;

char toLower(char ch){return tolower(ch);}
string ToLower(string & st);
void display(const string & st);

int main()
{
    cout << "Please enter words(quit to quit):\n";
    string input;
    //vector
    vector<string>words;
    while(cin >> input && input!="quit")
    words.push_back(input);
    cout << "Words list: \n";
    for_each(words.begin(),words.end(),display);
    cout << endl;

    //set
    set<string>wordset;
    transform(words.begin(),words.end(),
    insert_iterator<set<string>>(wordset,wordset.begin()),ToLower);
    cout << "Words list: \n";
    for_each(wordset.begin(),wordset.end(),display);
    cout << endl;

    //map
    map<string,int>wordmap;
    set<string>::iterator si;
    for(si=wordset.begin();si!=wordset.end();si++)
    wordmap[*si]=count(words.begin(),words.end(),*si);
    cout << "wordmap: \n";
    for(si=wordset.begin();si!=wordset.end();si++)
    cout << *si << " : " << wordmap[*si] << endl;
    cin.get();
    cin.get();
    return 0;
}

string ToLower(string & st)
{
    transform(st.begin(),st.end(),st.begin(),toLower);
    return st;
}

void display(const string & st)
{
    cout << st << " ";
}