#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

template<class T>
class Toobig{
    private:
    const T & big;
    public:
    Toobig(const T & b1):big(b1){}
    bool operator()(T & v){return v>big;}
};

void out(int n){cout << n << " ";}

int main()
{
    Toobig<int>f100(100);
    int a1[10]={110,120,130,80,70,90,50,300,900,190};
    list<int>l1(a1,a1+10);
    l1.remove_if(f100);
    cout << "After remove above 100, list: " << endl;
    for_each(l1.begin(),l1.end(),out);
    cin.get();
    cin.get();
    return 0;
}