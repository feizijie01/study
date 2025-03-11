#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
void outint(int n){cout << n << " ";}

int main()
{
    list<int>one(5,2);
    int s1[5]={1,2,4,8,6};
    int s2[6]={6,4,2,4,6,5};
    list<int>two;
    two.insert(two.begin(),s1,s1+5);
    list<int>three(two);
    three.insert(three.end(),s2,s2+6);

    cout << "list one: ";
    for_each(one.begin(),one.end(),outint);
    cout << endl << "list two: ";
    for_each(two.begin(),two.end(),outint);
    cout << endl << "list three: ";
    for_each(three.begin(),three.end(),outint);

    three.remove(2);
    cout << endl << "After remove(2), list three: ";
    for_each(three.begin(),three.end(),outint);

    three.splice(three.begin(),one);
    cout << endl << "After splice one, list three: ";
    for_each(three.begin(),three.end(),outint);

    three.unique();
    cout << endl << "After unique, list three: ";
    for_each(three.begin(),three.end(),outint);

    three.sort();
    three.unique();
    cout << endl << "After sort & unique, list three: ";
    for_each(three.begin(),three.end(),outint);

    three.merge(two);
    cout << endl << "After merge sorted two, list three: ";
    for_each(three.begin(),three.end(),outint);
    cin.get();
    cin.get();
    return 0;
}