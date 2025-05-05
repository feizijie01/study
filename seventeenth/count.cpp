#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(int agrv,char*argc[])
{
    if(agrv==1)
    cerr << "nothing.\n";
    exit(EXIT_FAILURE);
    
    long total=0;
    long count;
    char ch;
    ifstream fin;
    for(int file=1;file<agrv;file++)
    {
        fin.open(argc[file]);
        if(!fin.is_open())
        {
            cerr << "cant not open the " << argc[file];
            fin.clear();
            continue;
        }
        
        count =0;
        while(fin.get(ch))
        count++;

        cout << argc[file] << " has " << count << " chars.\n";
        total+=count;
        fin.clear();
        fin.close();
    }

    cout << "Total: " << total << endl;
    cin.get();
    cin.get();
    return 0;
}