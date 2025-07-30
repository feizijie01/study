#include<iostream>
int main()
{
    using namespace std;
    cout << "Please enter some numbers: \n";
    int currValue=0,val=0,cnt=0;
    if(cin >> currValue)
    {
        cnt=1;
    while(cin >> val)
    {
        
        if(currValue==val)
        {
            cnt++;
        }
        else
        {   
            cout << currValue << " appears "  << cnt << " times.\n";
            currValue=val;
            cnt=1;
        }
    }
    cout << currValue << " appears " << cnt << " times.\n";
    }
    cin.clear();
    cin.get();
    cin.get();
    return 0;
}