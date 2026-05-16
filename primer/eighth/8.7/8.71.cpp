#include<iostream>
#include<fstream>
#include"8.70.cpp"
using namespace std;
//命令行找到路径再运行
int main(int argv,char * argc[])
{   
    if(argv==1)
    {
        cout << "Nothing.\n";
        exit(EXIT_FAILURE);
    }
    Sales_data total;
    ifstream fin;
    ofstream fout;
    fin.open(argc[1]);
    fout.open(argc[2],ofstream::app);
    if(fout.is_open())
    cout << "fout can open\n";
    if(fin.is_open())
    {   
        cout << "fin can open\n";
        Sales_data trans;
        while(read(fin,trans))
        {
            if(total.isbn()==trans.isbn())
            total.combine(trans);
            else 
            {   
                if(total.units_sold!=0)
                print(fout,total) << endl;
                total=trans;
            }
        }
        print(fout,total) << endl;
    }
    else
    {
        cout << "Nothing!.\n";
    }
    fin.close();
    fout.close();
    return 0;
}