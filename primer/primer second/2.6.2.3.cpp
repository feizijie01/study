#include<iostream>
#include<string>
#include<list>
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
    list<sales_data>l1;
    list<string>l2;
    cout << "Please enter the data: \n";
    double price;
    sales_data temp;
    do
    {   
        cin >> temp.isbn >> temp.volume >> price;
        cin.get();
        l2.push_back(temp.isbn);
        
    }while(cin.peek()!='\n');
    if(temp.volume>0)
    {
    
    int count=1;
    l2.sort();
    vector<string>l3;
    for(auto p=l2.begin();p!=l2.end();p++)
    { 
        l3.push_back(*p);
    }
    for(auto p=l3.begin();p!=l3.end();p++)
    {
        if(*p==*(p+1))
        count++;
        else
        {
            cout << *p << ": " << count << endl;
            count=1;
        }
       
    }
    }
    else
    {
        cout << "Not sales.\n";
    }
    cout << "All done.\n";
    cin.get();
    cin.get();
    return 0;
}