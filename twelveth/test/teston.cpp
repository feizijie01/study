#include<iostream>
#include"test.h"
#include<cstdlib>
#include<ctime>

bool newcustomer(double x);

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    using std::ios_base;
    const int Min_Per_hour = 60;
    
    std::srand(std::time(0));
    cout << "Please enter the simulation time in hours: ";
    long hours;
    cin >> hours;

    cout << "Please enter the queue limit: ";
    long qlimit;
    cin >> qlimit;

    cout << "Please enter the number of customers arriving per hour: ";
    long phour;
    cin >> phour;
    double min_per_cus = Min_Per_hour/phour;


    Queue line(qlimit);
    long cycletime = Min_Per_hour*hours;

    Item temp;
    long turnaways=0;   //unserved
    long customer=0;   // customers come in line
    long served;   //served
    int wait_time=0;  //process time
    long sum_linelength=0;
    long sum_time=0;
    
    for(int cycle=0;cycle<cycletime;cycle++)
    {
        if(newcustomer(min_per_cus))
        {
            if(line.isfull())
            turnaways++;
            else
            {
                customer++;
                temp.set(cycle);
                line.jiadui(temp);
                cout << line.count() << endl;
            }
        }
        if(wait_time<=0 && !line.isempty())
        {
            line.deldui(temp);
            wait_time=temp.ptime();
            served++;
            sum_time += cycle-temp.when();
        }
        if(wait_time >0)
        wait_time--;
        sum_linelength += line.count();
    }

    //汇报数据
    if(customer<=0)
    cout << "There no any customer." << endl;
    else
    {
    cout << "turnaways: " << turnaways << endl;
    cout << "customers: " << customer << endl;
    cout << "served: " << served << endl;
    cout.precision(2);
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "line average length: " << (double)sum_linelength/cycletime << endl;
    cout << "average wait-time: " << (double)sum_time/served << endl;
    }
    cin.get();
    cin.get();
    return 0;

}

bool newcustomer(double x)
{
    return rand()*x/RAND_MAX<1;
}