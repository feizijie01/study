#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
int main()
{   
    //初始化multimap 与作者的set
    vector<pair<string,string>>v1={{"hejie","abc"},{"hejie","def"},{"hejie","ghi"},
    {"heji","abc"},{"heji","def"},{"heji","ghi"}};
    multimap<string,string>works;
    set<string>authors;
    for(auto p:v1)
    {
        works.insert(p);
        authors.insert(p.first);
    }

    //打印作者和作品名称
    cout<<"Writers and works list:\n";
    for(auto q:authors)
    {
        cout << q << endl;
        auto jihe=works.equal_range(q);
        for(;jihe.first!=jihe.second;jihe.first++)
        cout << jihe.first->second << endl;
        cout << endl;
    }

    cin.get();
    cin.get();
    return 0;
}