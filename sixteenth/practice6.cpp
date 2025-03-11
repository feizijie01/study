#include<iostream>
#include<queue>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
const int min_per_hour=60;
bool newcus(double n);

class Customer
{
    private:
    long arrive;
    int processtime;

    public:
    
    long when()const{return arrive;}
    int ptime()const{return processtime;}
    void set(long when)
    {
        arrive=when;
        processtime=rand()%3+1;
    }
};
typedef Customer Item;
struct Node{Item item;Node * next;};

main()
{
    srand(time(0));
    
    cout << "Please enter duiwu zuida renshu: ";
    int qs;
    cin >> qs;
    queue<Item>line;

    cout << "Please enter the moni xiaoshi shu: ";
    int hours;
    double cyclelimts;
    cin >> hours;
    cyclelimts=min_per_hour*hours;

    cout << "Please enter the perhour people: ";
    double perhour;
    cin >> perhour;
    double min_per_cus = min_per_hour/perhour;

    Item  temp;
    double turnaway=0;
    double customer=0;
    double served=0;
    long sum_line=0;
    int waittime=0;
    long line_wait=0;

    for(int cycle=0;cycle<cyclelimts;cycle++)
    {
        if(newcus(min_per_cus))
        {
            if(line.size()>=qs)
            turnaway++;
            else
        {
            customer++;
            temp.set(cycle);
            waittime=temp.ptime();
            line.push(temp);
        }
        }
        
        

        if(waittime<=0 && !line.empty())
        {
            served++;
            line.pop();
            line_wait += cycle-temp.when();
        }
        if(waittime>0)
        waittime--;
        
        sum_line += line.size();
        
    }

    if(customer>0)
    {
        cout << "Turnaway: " << turnaway << endl;
        cout << "Served: " << served << endl;
        cout << "Customer: " << customer << endl;
        cout.setf(ios_base::floatfield,ios_base::fixed);
        cout.precision(2);
        cout << "Average linelong: " << (double)sum_line/cyclelimts << endl;
        cout << "Average waitting: " << (double)line_wait/served << " minutes."<< endl;
    }
    else
    {
        cout << "No people \n";
        cout << "Done.\n";
    }
     cin.get();
     cin.get();
     return 0;

}

bool newcus(double n)
{
    return n*rand()/RAND_MAX<1;
}