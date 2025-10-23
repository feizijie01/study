#include<vector>
#include<iostream>
using namespace std;
using pf=int(*)(int n,int m);

int addint(int n,int m)
{
    return n+m;
}

int jianint(int n,int m)
{
    return n-m;
}

int chengint(int n,int m)
{
    return n*m;
}

int chuint(int n,int m)
{
    return n/m;
}


int main()
{
    std::vector<pf> v1;
    v1.push_back(&addint);
    v1.push_back(&jianint);
    v1.push_back(&chengint);
    v1.push_back(&chuint);

    cout << "When n =1,m=2,the result: \n";
    cout << "m+n= "<<(v1[0])(1,2) << endl;
    cout << "m-n= "<<(v1[1])(1,2) << endl;
    cout << "m*n= "<<(v1[2])(1,2) << endl;
    cout << "m/n= "<<(v1[3])(1,2) << endl;
    cin.get();
    cin.get();
    return 0;
}