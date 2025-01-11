#include"practice3.h"
#include<cmath>

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
        }
        catch(jilei & jg)
        {   
            jilei * pjg= &jg;
            bad_hmean * hj;
            bad_gmean * gj;
            if(hj=dynamic_cast<bad_hmean *>(pjg))
            {
                hj->report();
                break;
            }
            if(gj=dynamic_cast<bad_gmean *>(pjg))
            {
                gj->report();
                break;
            }
        }
        cout << "next two Numbers: ";
    }
    cout << "BYE!.\n";
    cin.get();
    cin.get();
    return 0;
}

double hmean(double a,double b)
{
    if(a==-b)
    throw bad_hmean(a,b,"badhmean");
    return 2.0*a*b/(a+b);
}

double gmean(double a,double b)
{
    if(a<0 || b<0)
    throw bad_gmean(a,b,"badgmean");
    return std::sqrt(a*b);
}