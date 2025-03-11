#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;
typedef int KeyType;
typedef pair<const KeyType,string> Pair;
typedef multimap<const KeyType,string> MapCode;

int main()
{
    MapCode codes;
    codes.insert(Pair(718,"apple"));
    codes.insert(Pair(312,"boy"));
    codes.insert(Pair(520,"coffice"));
    codes.insert(Pair(718,"potato"));
    codes.insert(Pair(520,"wonder"));
    codes.insert(Pair(312,"hope"));

    cout << "Code number is 718 has: " << codes.count(718) << endl;
    cout << "Code number is 312 has: " << codes.count(312) << endl;
    cout << "Code number is 520 has: " << codes.count(520) << endl;

    MapCode::iterator it;
    cout<<  "Area Code" << "    " << "words" << endl;
    for(it=codes.begin();it!=codes.end();it++)
    cout << "   "<< (*it).first << "       " << (*it).second << endl;
    cout << endl;

    pair<MapCode::iterator,MapCode::iterator>rang=codes.equal_range(718);
    cout << "718 words: " << endl;
    for(it=rang.first;it!=rang.second;it++)
    cout <<(*it).second << endl;
    cin.get();
    cin.get();
    return 0;
}