#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<functional>

using namespace std;

void Show(double n)
{
    cout.width(6);
    cout << n << " ";
}

int main()
{
    double ar1[6]={1,2,3,4,5,6};
    double ar2[6]={7,8,9,10,11,12};

    vector<double>v1(ar1,ar1+6);
    vector<double>v2(ar2,ar2+6);

    cout.setf(ios_base::fixed);
    cout.precision(1);

    cout << "v1:\t";
    for_each(v1.begin(),v1.end(),Show);
    cout << endl;

    cout << "v2:\t";
    for_each(v2.begin(),v2.end(),Show);
    cout << endl;

    vector<double>sum(6);
    transform(v1.begin(),v1.end(),v2.begin(),sum.begin(),plus<double>());
    cout << "sum(v1+v2):\t";
    for_each(sum.begin(),sum.end(),Show);
    cout << endl;

    vector<double>prod(6);
    transform(v1.begin(),v1.end(),prod.begin(),bind1st(multiplies<double>(),2.5));
    cout << "prod:\t";
    for_each(prod.begin(),prod.end(),Show);
    cout << endl;

    cin.get();
    cin.get();
    return 0;
}