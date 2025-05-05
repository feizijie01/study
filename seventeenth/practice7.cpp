#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
void ShowStr(const string & s);
void GetStrs(ifstream & fin , vector<string> & v);


class Store
{
    private:
    ofstream & outstream;
    public:
    Store(ofstream & os):outstream(os){};
    void operator()(const string & s)
    {   
        int len=s.length();
        outstream.write((char*)&len,sizeof(int));
        outstream.write(s.data(),len);
    }
    ~Store(){}
};


int main()
{
    
    vector<string>vostr;
    string temp;

    // acquire strings
    cout << "Enter strings(empty line to quit):\n";
    while(getline(cin,temp) && temp[0]!='\0')
    vostr.push_back(temp);
    cout << "Here is your input.\n";
    for_each(vostr.begin(),vostr.end(),ShowStr);

    //store in a file
    ofstream fout("string.dat",ios_base::out | ios_base::binary);
    for_each(vostr.begin(),vostr.end(),Store(fout));
    fout.close();

    //recover file contents
    vector<string>vistr;
    ifstream fin("string.dat",ios_base::in|ios_base::binary);
    if(!fin.is_open())
    {
        cout << "File cant open.\n";
    }
    GetStrs(fin,vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(),vistr.end(),ShowStr);
    cin.get();
    cin.get();
    return 0;
}

void ShowStr(const string & s)
{
    cout << s << endl;
}



void GetStrs(ifstream & fin , vector<string> & v)
{   
    while(fin.peek()!=EOF)
    {
        int length;
        string s;
        fin.read((char*)&length,sizeof(int));
        for(int n=0;n<length;n++)
        s.push_back(fin.get());
        v.push_back(s);

    }
   
}