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
    std::ofstream fout;
    fout.open("thewalk.txt");
    cout << "Enter target distance (q to quit): ";
    
    while(cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        break;
        int i=0;
        
        while(result.magval() < target)
        {
            
            direction = rand() % 360;
            step.reset(dstep,direction,Vector::POL);
            result = result +step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
             << result.magval()/steps << endl;            // mag maybe > target 
        steps = 0;
        result.reset(0.0,0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get()!='\n')
    continue;
    cin.get();
    return 0;
}