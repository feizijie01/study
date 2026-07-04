#include<list>
#include<iostream>
#include<iterator>
using namespace std;
void elimDups(list<string> & words)
{
    words.sort();
    cout << "After sort(): ";
    for(string s:words)
    cout << s << " ";
    cout << endl;

    words.unique();
    cout << "After unique(): ";
    for(string s:words)
    cout << s << " ";
}

int main()
{
    list<string>l1{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    elimDups(l1);
    cin.get();
    cin.get();
    return 0;
}