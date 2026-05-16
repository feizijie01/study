#include<fstream>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>

int main()
{
    using namespace std;
    ifstream fin("D:\\study\\C++\\CodeProject\\eighth\\8.10\\words.txt");
    vector<string>vs;
    if(fin.is_open())
    {
        cout << "File is opening.\n";
        while(fin)
      {
        string s;
        if(fin.peek()!=EOF)
        {
            fin >> s;
         vs.push_back(s);
        }
      }
    }

    
    for(auto p=vs.begin();p!=vs.end();p++)
    {       
        istringstream s1(*p);
        cout << s1.str();
        cout << endl;
    }

    cin.get();
    cin.get();
    return 0;

}