#include<fstream>
#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{   
    ifstream fin;
    fin.open("danci.txt");
    if(fin.is_open())
    cout << "Open successfully\n";

    string word;
    string maxword("a");
    while (fin >> word)
    {
        if(word.find_first_of("dfghjklpqy")==string::npos)
        {
            maxword=(maxword.size()<=word.size()?word:maxword); 
        }
        else
        continue;
        
    }
    cout << maxword;
    
    fin.close();
    cin.get();
    return 0;
}


