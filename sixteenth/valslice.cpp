#include<iostream>
#include<valarray>
#include<cstdlib>

using namespace std;
typedef valarray<int> vint;
void show(const vint & v, int n);

int main()
{
    const int size=12;
    vint valint(size);
    for(int i=0;i<size;i++)
    valint[i]=rand()%10;
    cout << "Original val: \n";
    show(valint,3);

    vint vclo=valint[slice(1,4,3)];
    cout << "Second lie in valint: \n";
    show(vclo,1);

    vint vrow=valint[slice(3,3,1)];
    cout << "Second row in valint: \n";
    show(vrow,3);

    valint[slice(2,4,3)]=10;
    cout << "After third lie change to 10.\n";
    show(valint,3);

    valint[slice(0,4,3)]=vint(valint[slice(1,4,3)])+vint(valint[slice(2,4,3)]);
    cout << "After second lie + third lie to first lie.\n";
    show(valint,3);
    cin.get();
    cin.get();
    return 0;
}

void show(const vint & v, int n)
{
    int lim = v.size();
    for(int i=0;i<lim;i++)
    {   
        cout.width(3);
        cout << v[i]; 
        if(i%n==n-1)
        cout << endl;
        else
        cout << ' ';
    }
    if(lim%n!=0)
    cout << endl;
}