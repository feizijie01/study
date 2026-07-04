#include<iterator>
#include<algorithm>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    //1,打开文件
    ifstream fin;
    ofstream fout1,fout2;
    fin.open("D:/study/C++/CodeProject/primer/tenth/10.33/numbers.txt");
    fout1.open("D:/study/C++/CodeProject/primer/tenth/10.33/ji.txt");
    fout2.open("D:/study/C++/CodeProject/primer/tenth/10.33/ou.txt");
    
    //2,创建流迭代器
    istream_iterator<int> is(fin);
    ostream_iterator<int> os1(fout1," ");
    ostream_iterator<int> os2(fout2,"\n");
    //3，筛选，分流
    while(fin.peek()!=EOF)
    {   
        cout << "11111\n";
        if((*is)%2!=0)
        os1=*is;
        else
        os2=*is;

        is++;
    }
    fout1.close();
    fout2.close();
    
    cout << "Done.";
    cin.get();
    cin.get();
    return 0;
}