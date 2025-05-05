#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<string>
int main(int argv,char*argc[])
{
    using namespace std;
    if(argv!=4)
    {
        cerr << "Error.\n";
        exit(EXIT_FAILURE);
    }

    char ch;
    string s1,s2;
    
    ifstream fin1,fin2;
    ofstream fout;
    fin1.open(argc[1]);
    fin2.open(argc[2]);
    fout.open(argc[3],ios::app);
    if(!fin1.is_open() or !fin2.is_open() or !fout.is_open())
    cout << "cant open file!\n";
    else
    {
        while(fin1.peek()!=EOF or fin2.peek()!=EOF)
        {
            
            if(fin1.peek()!=EOF)
            {
                getline(fin1,s1);
                fout << s1 << " ";
            }
            if(fin2.peek()!=EOF)
            {
                getline(fin2,s2);
                fout << s2 ;
            }
            fout << endl;
         
        }
       
    }
    fin1.close();
    fin2.close();
    fout.close();
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}