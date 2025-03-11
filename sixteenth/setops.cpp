#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s1[6]={"buffoon","thinkers","for","heavy","can","for"};
    string s2[6]={"metal","any","food","elegant","deliver","for"};

    set<string>A(s1,s1+6);
    set<string>B(s2,s2+6);

    ostream_iterator<string,char>out(cout," ");
    cout << "Set A: ";
    copy(A.begin(),A.end(),out);
    cout << endl;

    cout << "Set B: ";
    copy(B.begin(),B.end(),out);
    cout << endl;
    
    cout << "After A & B union: ";
    set_union(A.begin(),A.end(),B.begin(),B.end(),ostream_iterator<string,char>(cout," "));
    cout << endl;

    cout << "After A with B: ";
    set_intersection(A.begin(),A.end(),B.begin(),B.end(),ostream_iterator<string,char>(cout," "));
    cout << endl;

    cout << "After A - B: ";
    set_difference(A.begin(),A.end(),B.begin(),B.end(),ostream_iterator<string,char>(cout," "));
    cout << endl;

    set<string>C;
    cout << "After A & B union in C: ";
    set_union(A.begin(),A.end(),B.begin(),B.end(),insert_iterator<set<string>>(C,C.begin()));
    copy(C.begin(),C.end(),out);
    cout << endl;
    
    cout << "After inser C: ";
    C.insert("grungy");
    copy(C.begin(),C.end(),out);
    cout << endl;
    cout << "Show a range: ";
    
    copy(C.lower_bound("ghost"),C.upper_bound("spook"),out);
    cin.get();
    cin.get();
    return 0;
}