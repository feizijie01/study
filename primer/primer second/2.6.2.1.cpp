#include<iostream>
#include<string>
using namespace std;
struct sales_data
{
    string isbn;
    int volume=0;
    double total=0.0;
};

int main()
{
    sales_data data1,data2;
    double price1,price2;
    cin >> data1.isbn >> data1.volume >> price1;
    
    cin >> data2.isbn >> data2.volume >> price2;

    cout << "Data1: " << data1.isbn << " " << data1.volume << " " << price1 << endl;
    cout << "Data2: " << data2.isbn << " " << data2.volume << " " << price2 << endl;
    cout << "Book ISBN: " << data1.isbn << endl;
    cout << "Total volume is " << data1.volume+data2.volume << endl;
    cout << "Total revenue is " << data1.volume*price1+data2.volume*price2;
    cin.get();
    cin.get();
    return 0;
}