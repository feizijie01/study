#include"Sale_item.h"
#include<vector>
#include<algorithm>
#include<numeric>
bool compareIsbn(Sales_item & s1,Sales_item & s2)
{
    return s1.isbn() < s2.isbn();
}

int main()
{   
    //第一步，输入数据
    cout << "Please enter the data(q to quit):\n";
    Sales_item s,t;
    vector<Sales_item> v;
    while(cin >> s)
    {   
        v.push_back(s);
    }

     if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
            continue;
        }
     
    //第二步，排序
    sort(v.begin(),v.end(),compareIsbn);
    for(Sales_item ss:v)
    cout << ss << endl;
    
    //第三步，求何
    int i=0;
    for(auto p=v.begin();p!=v.end();p++)
    {
        
        if(find(p+1,p+2,*p)==p+1)   //直接使用sales_item做比较
        {
            i++;
            continue;
        }
        else
        {
            auto s=accumulate(p-i,p+1,t);
            i=0;
            cout << s << endl;
        }
    }
    
    cin.get();
    cin.get();
    return 0;
}