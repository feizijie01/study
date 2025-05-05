#include<iostream>
#include<fstream>
#include<iterator>
#include<list>
#include<string>
#include<algorithm>

int main()
{
    using namespace std;
    list<string> namelist1,namelist2,namelist3;
    string s1,s2;
    ifstream fin1,fin2;
    ofstream fout;
    fin1.open("D:/study/c++/codeproject/seventeenth/practice5/mat.dat.txt");
    fin2.open("D:/study/c++/codeproject/seventeenth/practice5/pat.dat.txt");
    fout.open("D:/study/c++/codeproject/seventeenth/practice5/matnpat.dat.txt");
    
    if(!fin1.is_open() || !fin2.is_open() || !fout.is_open())
    {
        cerr << "cant open file.\n";
        
    }
    
    //copy dat to list1 & list2
    while(fin1.peek()!=EOF) 
    {
        getline(fin1,s1);
        namelist1.push_back(s1);
    }

    while(fin2.peek()!=EOF)
    {
        getline(fin2,s2);
        namelist2.push_back(s2);
    }
    
    // add list1 list2 to list3
    back_insert_iterator<list<string>>back_itor(namelist3);
    copy(namelist1.begin(),namelist1.end(),back_itor);
    copy(namelist2.begin(),namelist2.end(),back_itor);
    namelist3.sort();
    namelist3.unique();
    
    // list3 to fout stream
    ostream_iterator<string,char>out_itor(fout,"\n");
    copy(namelist3.begin(),namelist3.end(),out_itor);

    fin1.close();
    fin2.close();
    fout.close();
    cin.get();
    cin.get();
    return 0;
}