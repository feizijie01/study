// randwalk.cpp  -- using the Vector class
// compile with the vector.cpp file
#include<iostream>
#include<cstdlib>    // rand(),srand() prototypes
#include"vector.h"
#include<ctime>  // time() prototype
#include<fstream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using VECTOR::Vector;
    srand(time(0));   //seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0,0.0);
    unsigned long steps =0;
    double target;
    double dstep;
    int N ;
    cout << "Please enter the times in int(all wrong input will exit): " ;
    cin >> N;
    int M=N;
    double max=0,min,total=0;
    while(N--)
    {
    cout << "Enter target distance(in double): ";
    if(!(cin >> target))
    break;
    cout << "Enter step length(in double): ";
    if (!(cin >> dstep))
    break;
        
        while(result.magval() < target)
        {
            
            direction = rand() % 360;
            step.reset(dstep,direction,Vector::POL);
            result = result +step;
            steps++;
        }
        total += steps;
        max=max>steps?max:steps;
        if(N==M-1)
        min=steps;
        else
        min=min<=steps?min:steps;       
        steps = 0;
        result.reset(0.0,0.0);
    }
    if(M!=0)
    {
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "Average: " << total/M << endl;
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get()!='\n')
    continue;
    cin.get();
    return 0;
}