#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;



class Sales_data
{
    private:
    string isbn;
    public:
    Sales_data(string s)
    {
        this->isbn=s;
    }
    string risbn(){return (*this).isbn;}
};

bool compareIsbn(Sales_data & s1,Sales_data & s2)
{
    return s1.risbn() < s2.risbn();
}

int main()
{
    vector<Sales_data>books;
    string isbns;
    cout << "Enter the isbn:(end to quit) ";
    while(cin >> isbns)
    {
        if(isbns=="end")
        break;
        Sales_data s(isbns);
        books.push_back(s);
    }

    sort(books.begin(),books.end(),compareIsbn);

    for(auto s:books)
    cout << s.risbn() << " ";
    cin.get();
    cin.get();
    return 0;
}