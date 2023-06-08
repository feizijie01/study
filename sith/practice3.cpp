#include<iostream>
#include<string>
using namespace std;
struct donors
{
    string name;
    double donation;
};
int main()
{
    int person;
    cout << "Please enter the number of donors: ";
    while((!(cin>>person))||(person<0))
    {
        if(!cin)
    { 
        cin.clear();
        while(cin.get()!='\n')
        continue;
        cout << "Please enter a right number:";
    }
    else if (person < 0)
    {
        while(cin.get()!='\n')
        continue;
        cout << "Please enter a right number:";
    }
    }
    donors*pdon=new donors[person];
    if (person >0)
    {
        cout << "Please enter the information of them." << endl;
    int i=0;
    
    while(i<person)
    {
    cout << "No."<<i+1 << " name : ";
    cin.get();
    getline(cin,pdon[i].name);
    cout << "No."<<i+1 <<" donation: ";
    cin >> pdon[i].donation;
    cout << endl;
    i++;
    }
    cout << endl;
    cout << endl;
    cout << "The Grand Patrons: " << endl;
    int big=0,j=0;
    while(j<i)
    {
        if (pdon[j].donation>10000)
        {
            cout << pdon[j].name << " : " << pdon[j].donation << endl;
        big++;
        }
        j++;
    }
    
    if (big==0)
    cout << "None." << endl;
    cout << endl;

    cout << "The Patrons: " << endl;
    int little=0,k=0;
    while(k<i)
    {
        if (pdon[k].donation<=10000)
        {
            cout << pdon[k].name << " : " << pdon[k].donation << endl;
            little++;
        }
        k++;
    }
    if (little==0)
    cout << "None." << endl;
    }
    else 
    {cout << "BYE.";}
    cin.get();
    cin.get();
    return 0;
}