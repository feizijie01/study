#include"somedefs.h"
double dub(double x){return 2.0*x;}
double square(double x){return x*x;}

int main()
{   
    double y=1.21;
    cout << "Function pointer: dub\n";
    cout << " " << use_f(y,dub) << endl;
    cout << "Function pointer: square\n";
    cout << " " << use_f(y,square) << endl;
    cout << "Function object: Fp(5.0)\n";
    cout << " " << use_f(y,Fp(5.0)) << endl;
    cout << "Function object: Fq(5.0)\n";
    cout << " " << use_f(y,Fq(5.0)) << endl;
    cout << "Lambda expression1 \n";
    cout << " " << use_f(y,[](double x){return x*x;});
    cout << "Lambda expression2 \n";
    cout << " " << use_f(y,[](double x){return x+x/2.0;});
    cin.get();
    return 0;
}