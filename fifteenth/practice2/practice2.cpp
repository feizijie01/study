#include"practice2.h"
#include<cmath>
using std::sqrt;

double gmean(double a,double b);
double hmean(double a,double b);

int main()
{
    double x,y,z;
    cout << "Please enter two double numbers:<q to quit> \n";
    while(cin >> x >> y)
    {
        try{
            z=hmean(x,y);
            cout << "x and y hmean is " << z << endl;
            z=gmean(x,y);
            cout << "x and y gmean is " << z << endl;
            cout << "Next two number:<q to quit> \n";
        }
        catch(bad_hmean & hg)
        {
            hg.what();
            cout << "Next two number:<q to quit> \n";
            continue;
        }
        catch(bad_gmean & gg)
        {
            gg.what();
            cout << "it is done.";
            break;
        }
    }
    cout << "BYE!";
    cin.get();
    cin.get();
    return 0;
}

double hmean(double a,double b)
{
    if(a==-b)
    throw bad_hmean();
    return 2.0*a*b/(a+b);
}

double gmean(double a,double b)
{
    if(a<0 || b<0)
    throw bad_gmean();
    return sqrt(a*b);
}