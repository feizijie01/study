#include<iostream>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{   
    cout << "Please enter numbers(886 to quit): ";
    istream_iterator<int> iter(cin);
    ostream_iterator<int> oter(cout," ");
    vector<int> v;
    
    while(*iter!=886)
    v.push_back(*iter++);

    sort(v.begin(),v.end());
    unique_copy(v.begin(),v.end(),oter);
    cin.get();
    cin.get();
    return 0;
}