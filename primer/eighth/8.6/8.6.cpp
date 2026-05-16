#include<iostream>
#include<fstream>
#include"8.61.cpp"
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
    fin.open(argc[argv-1]);
    if(fin.is_open())
    {   
        cout << "00000\n";
        Sales_data trans;
        while(read(fin,trans))
        {
            if(total.isbn()==trans.isbn())
            total.combine(trans);
            else 
            {   
                if(total.units_sold!=0)
                print(cout,total) << endl;
                total=trans;
            }
        }
        print(cout,total) << endl;
    }
    else
    {
        cout << "Nothing!.\n";
    }
    return 0;
}