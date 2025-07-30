#include<iostream>

int main()
{
    using namespace std;
    cout << "enter two array to compare them to see if they are equal.\n";
    cout << "First array:\n";
    cout << "Enter the elements number: \n";
    int m;
    cin >> m;
    int ar1[m];
    cout << "Input the elements(Enter to quit): ";
    int element=0;
    while(cin >> element)
    {
        for(int &i:ar1)
        i=element;
       
        if(cin.peek()=='\n')
        break;
    }

    cout << "second array:\n";
    cout << "Enter the elements number: \n";
    int n;
    cin >> n;
    int ar2[n];
    cout << "Input the elements(Enter to quit): ";
    
    while(cin >> element)
    {
        for(int &i:ar2)
        i=element;
        if(cin.peek()=='\n')
        break;
    }

    for(int x=0;x<m;x++)
    cout << ar1[x] << " " << ar2[x] << endl;
    
    if(m==n)
    {
        int i;
        for(i=0;i<m;i++)
        {
            if(ar1[i]==ar2[i])
            {
                
                cout << "00000000.\n";
                continue;
            }
            else
            break;
        }
        if(i==m)
        cout << "ar1==ar2.\n";
        else
        cout << "ar1!=ar2.\n";
    }
    else
    cout << "ar1 !== ar2\n";

    cin.get();
    cin.get();
    return 0;

}