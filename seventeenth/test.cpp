#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{   
    string  s;
    string s2;
    cout << "Enter the string:\n";
    getline(cin,s);
    ofstream fout;
    fout.open("tt.txt",ios_base::out|ios_base::binary);
    if(!fout.is_open())
    cout << "cant open file.\n";
    int n=s.length();
    fout.write((char*)&n,sizeof(int));
    fout.write(s.data(),n);
    fout.close(); //确保从缓冲区刷新到磁盘

    cout << "s Length: " << n << endl;
    cout << "s: " << s << endl;
    int m;
    ifstream fin;
    fin.open("tt.txt",ios_base::in|ios_base::binary);
    if(!fin.is_open())
    cout << "Fin can open file.\n";
    fin.read((char*)&m,sizeof(int));
    s2.resize(m);
    fin.read(s2.data(),m);
    fin.close();
    
    cout << "s2 Length: " << m << endl;
    cout << "s2: " << s2 << endl;
    cin.get();
    cin.get();
    return 0;
} 