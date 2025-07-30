#include<iostream>
#include<vector>

int main()
{
    using namespace std;
    vector<int>v1,v2;
    cout << "Enter the v1 data(Enter to quit): \n";
    int n1=0;
    while(cin >> n1)
    {
        v1.push_back(n1);
        if(cin.peek()=='\n')
        break;
    }

    cout << "Enter the v2 data(Enter to quit): \n";
    int n2=0;
    while(cin >> n2)
    {
        v2.push_back(n2);
        if(cin.peek()=='\n')
        break;
    }

    if(v1.size()==v2.size())
    {
        for(auto p1=v1.begin(),p2=v2.begin();p1!=v1.end()&&p2!=v2.end();p1++,p2++)
        {   
            if(p1==v1.end()-1 && *p1==*p2)
            {   
                cout << "V1==V2\n";
                break;
            }
            if(*p1==*p2)
            continue;
            else
            {
                cout << "V1!=V2;\n"; 
                break;
            }
        }
    }
    else
    cout << "V1!=V2;\n";
    cin.get();
    cin.get();
    return 0;
}