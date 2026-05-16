#include<string>
#include<vector>
#include<sstream>
#include<iostream>
using namespace std;

struct PersonInfo{
    string name;
    vector<string>phones;
};

int main()
{
    string line,word;
    vector<PersonInfo>people;
    istringstream record;
    
    while(getline(cin,line))
    {   
        PersonInfo info;
        record.str(line);
        record >> info.name;
        while(record >> word)
        info.phones.push_back(word);
        people.push_back(info);
        break;
    }
    cout << people[0].name << endl;
    for(auto p=people[0].phones.begin();p!=people[0].phones.end();p++)
    cout << *p << endl;

    cin.get();
    return 0;

}