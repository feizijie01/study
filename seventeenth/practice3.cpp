#include<iostream>
#include<cstdlib>
#include<fstream>
int main(int argc,char * argv[])
{
    using namespace std;
    if(argc<=2)
    {
        cerr << "Nothing.\n";
        exit(EXIT_FAILURE);
    }
    
    char ch;
    ifstream fin;
    ofstream fout;
    fin.open(argv[1]);
    fout.open(argv[2]);
    int i=0;
    if(!fout.is_open() or !fin.is_open())
    cout << "Cant open file.\n";
    else
    {
        while(fin.peek()!=EOF)
        {
            fin.get(ch);
            fout << ch;
            cout << ++i << endl;
        }
        cout << "Done.\n";
    }
    fout.close();
    fin.close();
    cin.get();
    cin.get();
    return 0;
}