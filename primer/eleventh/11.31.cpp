#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{   
    vector<pair<string,string>>v1={{"hejie","abc"},{"hejie","def"},{"hejie","ghi"}};
    multimap<string,string>works;
    for(auto p:v1)
    works.insert(p);
    
    //历遍
    auto q1=works.equal_range("hejie");
    for(;q1.first!=q1.second;q1.first++)
    cout <<(*q1.first).first << ": "<< q1.first->second << endl;

    //删除元素
    auto eq=works.find("hejie");
    if(eq==works.end())
    cout << "Cant find it\n";
    else
    works.erase(eq);

    //历遍
    cout << endl;
    cout << "After earse:\n";
    auto q2=works.equal_range("hejie");
    for(;q2.first!=q2.second;q2.first++)
    cout <<(*q2.first).first << ": "<< q2.first->second << endl;
    cin.get();
    cin.get();
    return 0;

}