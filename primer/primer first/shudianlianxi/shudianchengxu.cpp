#include"Sales_item.h"
#include<fstream>

int main()
{
    ifstream fin;
    fin.open("D:\\study\\c++\\codeproject\\primer first\\shudianlianxi\\jilu.txt");
    if(fin.is_open())
    cout << "Open success.\n";

    Sales_item total;
    if(fin>>total)
    {   
        Sales_item trans;
        while(fin >> trans)
        {
            if(total.ISBN()==trans.ISBN())
            total+=trans;
            else
            {
                cout << total << endl;
                total=trans;
            }
        }
        cout << total << endl;
    }
    else
    {
        cerr << "There no data.\n";
        return -1;
    }
    fin.close();
    cin.get();
    cin.get();
    return 0;
}