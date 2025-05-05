#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main(int argc,char*argv[])
{
    if(argc==1)
    {
        cerr<<"Nothing and exit.\n";
        exit(EXIT_FAILURE);
    }
    
    char ch;
    cout << "Please enter ur input:\n";
    ofstream fout;
    fout.open(argv[1]);
    if(fout.is_open())
    {   
        while(ch!='\n')
        {
            cin.get(ch);
            fout << ch;
        }
        cout << "Is open.\n";
    }
    else
    cout << "Not open.\n";
    fout.close();
    cin.get();
    cin.get();
    return 0;
}

//  in cmd to test
// practice2.cpp a.txt 