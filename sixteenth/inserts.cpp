#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

void output(const string & s){cout << s << " ";};

int main()
{
    string s1[4]={"apple","boy","monkey","purple"};
    string s2[2]={"gogo","chong"};
    string s3[2]={"well","fine"};

    vector<string>words(4);
    copy(s1,s1+4,words.begin());
    for_each(words.begin(),words.end(),output);
    cout << endl;

    copy(s2,s2+2,back_insert_iterator<vector<string>>(words));
    for_each(words.begin(),words.end(),output);
    cout << endl;

    copy(s3,s3+2,insert_iterator<vector<string>>(words,words.begin()));
    for_each(words.begin(),words.end(),output);
    cout << endl;

    cin.get();
    cin.get();
    return 0;
}