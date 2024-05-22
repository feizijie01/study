// bank.cpp -- using the Queue interface
// compile with queue.cpp
//已改成输入每小时到的客人数，得出平均等待时间的版本。
#include<iostream>
#include"pxqueue.h"
#include<cstdlib>  // for rand() and srand()
#include<ctime> // for time()
const int MIN_PER_HR = 60;

bool newcustomer(double x);    //is there a new customer

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    using std::ios_base;
    // setting things up
    double avtime;
    int perhour1;
    while(avtime>1.05 || avtime <0.95)
    {
    std::srand(std::time(0));    // random initializing of rand()
    
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue:10 \n";
    int qs=10;
    
    Queue line(qs),line2(qs);      // line queue holds up to qs people
    
    cout << "Enter the number of simulation hours:100 \n" ;
    int hours=100;   //hours of simulation
    
    //simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR*hours;   // # of cycle

    cout << "Enter the average number of customers per hour:";
    double perhour;  //average # of arrival per hour
    cin >> perhour;
    double min_per_cust;   //average time between arrivals
    min_per_cust = MIN_PER_HR/perhour;

    Item temp;       // new customer data
    long turnaways = 0;    // turned away by full queue
    long customers = 0;   //joined the queue
    long served = 0;   // served during the simulation
    long sum_line = 0,sum_line1=0,sum_line2=0;   //cumulative line length 
    int wait_time=0,wait_time2=0;   // time until autoteller is free
    long line_wait=0,line_wait2=0;   //cumulative time in line

    //running the simulation
    for (int cycle=0;cycle <cyclelimit;cycle++)
    {
        if(newcustomer(min_per_cust))    //have newcomer
        {
            if(line.isfull())
            turnaways++;
            else
            {
                customers++;
                temp.set(cycle);   //cycle = time of arrival
                if(line.queuecount()<line2.queuecount())
                line.enqueue(temp);  // add newcomer to line
                else
                line2.enqueue(temp);
            }
        }
        if(wait_time <=0 && !line.isempty())
        {
            line.dequeue(temp);   //attend next customer
            wait_time = temp.ptime();   // for wait_time minutes
            line_wait += cycle-temp.when();
            served++;
        }
        if(wait_time>0)
        wait_time--;
        sum_line1 += line.queuecount();

        if(wait_time2 <=0 && !line2.isempty())
        {
            line2.dequeue(temp);   //attend next customer
            wait_time2 = temp.ptime();   // for wait_time minutes
            line_wait2 += cycle-temp.when();
            served++;
        }
        if(wait_time2>0)
        wait_time2--;
        sum_line2 += line2.queuecount();
    }

    //reporting results
    if(customers > 0)
    {   
        
        cout << "customers accepted: " << customers << endl;
        cout << " customers served: " << served << endl;
        cout << "        turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout .precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        sum_line=(sum_line1+sum_line2)/2;
        cout << (double)sum_line/cyclelimit << endl;
        cout << " average wait time: "
             << (double)(line_wait+line_wait2)/served << " minutes\n";
        avtime = (double)(line_wait+line_wait2)/served;
        if(avtime<1.05 && avtime >0.95)
        perhour1=perhour;
    }

    else
       cout << "No customers!\n";
       cout << endl;
       cout << endl;
    }
    cout << "The avtime will be " << avtime << "minutes when " << perhour1 << "people come in one hour." << endl;
       cout << "Done!\n";
       cin.get();
       cin.get();
       return 0;
}

// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return(std::rand()*x/RAND_MAX<1);
}