#include<vector>
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    vector<string>v1;
    int count=1,imax=0;
    string s1;
    while(cin >> s1 )
    {   
        if(v1.size()>0)
        {
        if(s1==*(v1.end()-1))
        {
            imax=1;
            count++;
        }
        else
        {
            cout << *(v1.end()-1) << ": " << count << endl;
            count=1;
        }
          
        }
        v1.push_back(s1);
        
        if(cin.peek()=='\n')
        break;
    }
    if(count > 1)
    cout << *(v1.end()-1) << ": " << count << endl;
    
    if(imax==0)
    cout << "no words repeat.\n";
    
    cin.get();
    cin.get();
    return 0;
}