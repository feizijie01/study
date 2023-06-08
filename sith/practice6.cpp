#include<iostream>
#include<fstream>
#include<string>
struct donors{
std::string name;
double donation;
};
int main()
{
    using namespace std;
    ifstream fcin;
    fcin.open("donors.txt");
    int person;
    fcin >> person;

    donors*pdon=new donors[person];
    
    int i=0;
    while(i<person)
    {
    fcin.get();
    getline(fcin,pdon[i].name);
    fcin >> pdon[i].donation;
    i++;
    }
    
    cout << "Grand Patrons: \n";
    for(int j=0;j<i;j++)
    {
        if(pdon[j].donation>10000)
        cout << pdon[j].name <<" : " << pdon[j].donation<< endl;
    }
    cout << endl;
    
    cout << "Patrons: \n";
    for(int k=0;k<i;k++)
    {
        if(pdon[k].donation<=10000)
        cout << pdon[k].name <<" : " << pdon[k].donation<< endl;
    }
    
    cin.get();
    cin.get();
    return 0;

}