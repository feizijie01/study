#include<iostream>
#include<string>
#include<vector>

using namespace std;
struct sales_data
{
    string isbn;
    int volume=0;
    double revenue=0.0;
};

int main()
{
    vector<sales_data>v1;
    cout << "Enter the data: \n";
    sales_data temp;
    double price;
    do
    {
        cin >> temp.isbn >> temp.volume >> price;
        cin.get();
        temp.revenue=temp.volume*price;
        v1.push_back(temp);
    }while(cin.peek()!='\n');

    double totalrevenue=0.0;
    for(auto p=v1.begin();p!=v1.end();p++)
    {
        totalrevenue += p->revenue;
    }
    cout << "Total revenue: " << totalrevenue << endl;
    cin.get();
    cin.get();
    return 0;
}