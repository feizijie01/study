#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

int main()
{
    using namespace std;

    const char * file = "guest.txt";
    
    char ch;
    ifstream fin;
    fin.open(file);
    
    if(fin.is_open())
    {
        cout << "The " << file << " content: \n";
        while(fin.get(ch))
        cout << ch;
    }
    fin.close();

    ofstream fout(file,ios_base::out | ios_base::app);
    if(!fout.is_open())
    {
        cerr << "Cant open the file.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Add the new guests(blank line to quit):\n";
    string name;
    while(getline(cin,name) && name.size()>0)
    {
        fout << name << endl;
    }
    fout.close();

    fin.open(file);
    cout << "The new content:\n";
    while(fin.get(ch))
    cout << ch;
    fin.close();
    
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}