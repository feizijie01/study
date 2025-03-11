//strfile.cpp -- read strings from a file
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

int main()
{
    using namespace std;
    ifstream fin;
    fin.open("D:\\study\\c++\\codeproject\\sixteenth\\strfile\\tobuy.txt");
    if(fin.is_open()==false)
    {
        cerr << "fail to open the txt.\n";
        exit(EXIT_FAILURE);
    }

    string item;
    int count =0;
    getline(fin,item,':');
    while(fin)
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin,item,':');
    }
    cout << "Done\n";
    fin.close();

    cin.get();
    cin.get();
    return 0;
}