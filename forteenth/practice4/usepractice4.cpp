#include"practice4.h"
int main()
{
    srand(time(0));
    string firstn,lastn;
    cout << "Please enter ur first name: ";
    getline(cin,firstn);
    cout << "Please enter ur last name: ";
    getline(cin,lastn);
    Person p1(firstn,lastn);
    
    cout << "If u r a Gunslinger,enter g,\nif u r a PokerPlayer,enter p\n"
         << "or if u r a Badude,enter b.\n"
         << "or if u want to quit,enter q.\n";
    char role;
    while(cin >> role)
    {

    
    if(strchr("gGPpBbQq",role)==NULL)
    {
        cout << "Please enter right alpha.\n";
        continue;
    }
    if(role=='q' || role=='Q')
    {
        cout << "End.\n";
        break;
    }
   
    switch (role)
    {
    case 'G':
    case 'g': 
              {
              double t;
              int k;
              cout << "Please enter the time: ";
              cin >> t;
              cout << "Please enter the kehen: ";
              cin >> k;
              Gunslinger g(t,k,p1);
              g.Show();
              cout << endl;
              }
        break;
    case 'P':
    case 'p': 
              {
              PokerPlayer pp(p1);
              pp.Show();
              cout << pp.Draw();
              cout << endl;
              }
        break;
    case 'B':
    case 'b': 
              {
                double t;
                cout << "Please enter the time: ";
                cin >> t;
                Badude b1(p1,t);
                b1.Show();
              }
        break;
    
    default:
        break;
    }
    cout << "Enter again: ";
    }
    cout << "That is all.\n";
    cin.get();
    cin.get();
    return 0;
}