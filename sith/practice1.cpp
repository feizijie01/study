#include<iostream>
const int strsize=50;
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    using namespace std;
    bop people[5]={
        {"xiaoyi","chengxuyuan","first",0},
        {"xiaoer","meigong","second",1},
        {"xiaosan","siji","third",2},
        {"xiaosi","gendan","fourth",0},
        {"xiaowu","laoshi","fifth",1}
    };
    cout << "Benevolent Order of programmers Report" << endl;
    cout << "a. display by name\t  b.display by title" << endl;
    cout << "c. display by bopname\t  d. dispaly by preference"<< endl;
    cout << "q. quit" << endl;
    cout << "Enter your choices: ";
    char choices;
    cin >> choices;
   
    while(choices!='q') 
    {
       if(!cin)
        {
        cin.clear();
        cin.get();
        }
      else if(choices=='a')
      {
        cout << people[0].fullname << endl;
        cout << people[1].fullname << endl;
        cout << people[2].fullname << endl;
        cout << people[3].fullname << endl;
        cout << people[4].fullname << endl<< endl;
        cout << "Next choices: ";
        cin >> choices;
        continue;
      }
      else if(choices =='c')
      {
        cout << people[0].bopname << endl;
        cout << people[1].bopname << endl;
        cout << people[2].bopname << endl;
        cout << people[3].bopname << endl;
        cout << people[4].bopname << endl<< endl;
        cout << "Next choices: ";
        cin >> choices;
        continue;
      }
      else if(choices =='b')
      {
        cout << people[0].title << endl;
        cout << people[1].title << endl;
        cout << people[2].title << endl;
        cout << people[3].title << endl;
        cout << people[4].title << endl<< endl;
        cout << "Next choices: ";
        cin >> choices;
        continue;
      }
      else if(choices =='d')
      {
        switch(people[0].preference)
        {
            case 0: cout << people[0].fullname<< endl;break;
            case 1: cout << people[0].title<< endl;break;
            case 2: cout << people[0].bopname<< endl;break;
        };
        switch(people[1].preference)
        {
            case 0: cout << people[1].fullname<< endl;break;
            case 1: cout << people[1].title<< endl;break;
            case 2: cout << people[1].bopname<< endl;break;
        };
        switch(people[2].preference)
        {
            case 0: cout << people[2].fullname<< endl;break;
            case 1: cout << people[2].title<< endl;break;
            case 2: cout << people[2].bopname<< endl;break;
        };
        switch(people[3].preference)
        {
            case 0: cout << people[3].fullname<< endl;break;
            case 1: cout << people[3].title<< endl;break;
            case 2: cout << people[3].bopname<< endl;break;
        };
        switch(people[4].preference)
        {
            case 0: cout << people[4].fullname<< endl;break;
            case 1: cout << people[4].title<< endl;break;
            case 2: cout << people[4].bopname<< endl<< endl;break;
        };
        cout << "Next choices: ";
        cin >> choices;
        continue;
      }
      else 
      {
      cout << "Please enter a a, b, c, or d: " <<endl;
      cin >> choices;
      continue;
      };
    }
    cout << "Bye";
    
    cin.get();
    cin.get();
    return 0;

    

}