#include<iostream>
#include<fstream>
#include<string>
#include<list>
#include<vector>
using namespace std;
struct sales_data
{
    string isbn="nothing";
    int volume=0;
    double revenue=0.0;
};

int main()
{
    ifstream fin;
    fin.open("D:\\study\\c++\\codeproject\\primer\\primer second\\2.6.2.4\\jilu.txt");
    if(fin.is_open())
    {   
        cout << "Open.\n";
        sales_data total;
        total.volume=total.revenue=0.0;
        double price;
        while(fin.peek()!='\n')
        {   

            sales_data temp;
            if(total.isbn=="nothing")
            {   

                fin >> temp.isbn >> temp.volume >> price;
                fin.get();
                temp.revenue=price*temp.volume;

                //total data
                total.isbn=temp.isbn;
                total.volume+=temp.volume;
                total.revenue+=temp.revenue;
            }
            else
            {   
  
                fin >> temp.isbn >> temp.volume >> price;
                fin.get();
                temp.revenue=price*temp.volume;
                if(total.isbn==temp.isbn)
                {   

                    total.volume+=temp.volume;
                    total.revenue+=temp.revenue;
                }
                else
                {   

                    cout << total.isbn << ": " << total.volume << " " << total.revenue
                         << " " << total.revenue/total.volume << endl;
                    total.isbn=temp.isbn;
                    total.volume=temp.volume;
                    total.revenue=temp.revenue;
                }
            }
            
        }
        cout << total.isbn << ": " << total.volume << " " << total.revenue
                         << " " << total.revenue/total.volume << endl;
    }
    fin.close();
    cout << "Close.\n";
    cin.get();
    cin.get();
    return 0;
}