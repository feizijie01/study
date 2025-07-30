#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    unsigned grade;
    vector<int> scores(10,0);
    while (cin >> grade && grade <=100)
    {
        auto p=scores.begin();
        ++(*(p+grade/10));
        if(cin.peek()=='\n')
        break;
    }
    
    for(auto p=scores.begin();p!=scores.end();p++)
    {   
        
        if(p==scores.end()-1)
        cout << *p;
        else
        cout << *p << " ";
    }
    cin.get();
    cin.get();
    return 0;
    
}