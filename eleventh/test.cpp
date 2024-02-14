#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
class Test
{
    private:
    int first;
    int second;
    public:
    Test(int a,int b){first=a;second=b;}
    Test(){first=second=0;}
    friend istream & operator>>(istream & is,Test & t);
    friend ostream & operator<<(ostream & os,const Test & t);
};

int main()
{
Test t1(1,2);
cin >> t1;
cout << t1;
cin.get();
cin.get();  
return 0;
}

istream & operator>>(istream & is, Test & t)
{
    is >> t.first;
    is >> t.second;
    cout << t;
    return is;
}

ostream & operator<<(ostream & os, const Test & t)
{
    os << "First: " << t.first << endl;
    os << "Second: " << t.second << endl;
    return os;
}

