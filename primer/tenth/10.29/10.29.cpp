#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<string>v1;
    ifstream fin;
    fin.open("D:\\study\\C++\\CodeProject\\primer\\tenth\\10.29\\words.txt");
    istream_iterator<string> iter(fin),eof;
   while(iter != eof)
   {   
       v1.push_back(*iter++);     
   }
   
   fin.close();
    
    for(string s:v1)
    cout << s << endl;
    cin.get();
    cin.get();
    return 0;
}