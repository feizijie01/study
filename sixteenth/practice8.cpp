#include<iostream>
#include<iterator>
#include<algorithm>
#include<list>
#include<vector>
using namespace std;

int main()
{
    list<string>namelist1,namelist2,namelist3;
    vector<string>namelist;
    string name1,name2;
    ostream_iterator<string,char>out_itor(cout," ");
    cout << "Please enter Mat friends'name one by one(quit to quit):\n";
    while(getline(cin,name1) && name1!="quit")
    namelist1.push_back(name1);
    namelist1.sort();
    cout << "Mat friends'list: \n";
    copy(namelist1.begin(),namelist1.end(),out_itor);
    cout << endl;
    cout << endl;
    cout << "Please enter Pat friend'name one by one(quit to quit):\n";
    while(getline(cin,name2) && name2!="quit")
    namelist2.push_back(name2);
    namelist2.sort();
    cout << "Pat friends'list: \n";
    copy(namelist2.begin(),namelist2.end(),out_itor);
    cout << endl;
    cout << endl;
    back_insert_iterator<list<string>>back_itor(namelist3);
    copy(namelist1.begin(),namelist1.end(),back_itor);
    copy(namelist2.begin(),namelist2.end(),back_itor);

    cout << "The final list: \n";
    namelist3.sort();
    namelist3.unique();
    copy(namelist3.begin(),namelist3.end(),out_itor);
    cout << endl;
    
    cin.get();
    cin.get();
    return 0;
}