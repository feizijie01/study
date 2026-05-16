#include<string>
#include<vector>
#include<sstream>
#include<iostream>
#include<fstream>
using namespace std;
bool value(const string & s);
string & format(string & s);
struct PersonInfo{
    string name;
    vector<string>phones;
};

int main()
{
    string line,word;
    vector<PersonInfo>people;
    
    istringstream record;
    ifstream fin("D:\\study\\C++\\CodeProject\\eighth\\8.13\\people.txt");
    ofstream fout("D:\\study\\C++\\CodeProject\\eighth\\8.13\\newdata.txt");
    if(fin.is_open() && fout.is_open())
    cout << "Open successful.\n";
    int i=0;
    while(fin.peek()!=EOF)
    {   
        PersonInfo info;
        getline(fin,line);
        record.str(line);  
        cout << record.str() << endl; 
        
        record >> info.name;  
        
        while(record >> word)
        info.phones.push_back(word);
        
        record.clear();   // very important
        people.push_back(info);
    }

    for(auto  & ren:people)
    {
        ostringstream formatted,badnums;
        for(auto  & nums:ren.phones)
        {
            if(!value(nums))
            badnums << " " << nums;
            else
            formatted << " " << format(nums);
        }
        
        if(badnums.str().empty())
        fout << ren.name <<" "<< formatted.str() << endl;
        else
        cerr << "Bad input: "<< ren.name << " " << badnums.str() << endl;
    }
   
  
    fin.close();
    fout.close();
    cin.get();
    return 0;

}

bool value(const string & s)
{
    for(auto const & chars:s)
    {
        if(isalpha(chars))
        return false;
    }
    return true;
}

string & format(string & s)
{   
    int i=0;
    for(auto & digits :s)
    digits='0'+(++i);
    return s;
}