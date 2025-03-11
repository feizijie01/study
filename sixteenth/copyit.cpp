#include<iostream>
#include<vector>
#include<iterator>

int main()
{
    using namespace std;
    int vast[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int>v1(10);
    copy(vast,vast+10,v1.begin());
    ostream_iterator<int,char>iter_out(cout," ");
    cout << "Copy vast to v1: \n";
    copy(v1.begin(),v1.end(),iter_out);
    cout << endl;
    cout << "yinshi fanxiang:\n";
    copy(v1.rbegin(),v1.rend(),iter_out);
    cout << endl;
    cout << "xianshi fanxiang\n";
    vector<int>::reverse_iterator r;
    for( r=v1.rbegin();r!=v1.rend();r++)
    cout << *r << " ";
    cout << endl;
    cin.get();
    cin.get();
    return 0;
}