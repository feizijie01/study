#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
void addfamliy(map<string,vector<string>> & fam)
{
    cout << "1 to add family and 2 to add family member and 0 to quit.\n";
    int n;
    while(cin >> n)
    {
        if(n==0)
        break;

        if(n==1)  //添加家庭
    {
        cout << "Please enter the fisrt name: ";
        string Fname;
        cin >> Fname;
        while(fam.find(Fname)!=fam.end())  //如果姓已存在，则添加后缀，例如何01
        {
            cout << "The first name you entered already exists; please add a number suffix.\n";
            cout << "Please enter the fisrt name again: ";
            cin >> Fname;
        }

        cout << "Please enter ur family member last name(s) and end to quit: \n";
        string Lnames;
        while(cin >> Lnames)
        {   
            if(Lnames == "end")
            break;
            fam[Fname].push_back(Lnames);
        }
    
    }

    if(n==2)   //添加成员
    {
        cout << "Enter ur First name: ";
        string Fname;
        cin >> Fname;
        cout << "Please enter ur family member last name(s) and end to quit: \n";
        string Lnames;
        while(cin >> Lnames)
        {   
            if(Lnames == "end")
            break;
            fam[Fname].push_back(Lnames);
        }
    }

    cout << "1 to add family and 2 to add family member and 0 to quit.\n";  
    }
        
}


int main()
{
    map<string,vector<string>>fam;
    addfamliy(fam);

    cout << "Let us see what has recorded:\n";
    for(auto fa:fam)
    {   
        string fafirst;         //直接从fa.first录入无后缀的firstname
        for(char c:fa.first)
        {
            if(isalpha(c))
            fafirst.push_back(c);
        }
        
        cout << "First name: "<< fafirst << endl;      //输出时需要把数字后缀去掉
        cout << "Last name(s): " << endl;
        for(auto lnames:fa.second)
        {
            cout << lnames << " ";
        }
        cout << endl;
        cout << endl;
    }
    cin.get();
    cin.get();
    return 0;
}