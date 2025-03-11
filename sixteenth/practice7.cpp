#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>
#include<time.h>
using namespace std;

vector<int> Lotto(int m,int n);
int main()
{   
    srand(time(0));
    cout << "Enter the numbers of number: ";
    int number,lucky;
    cin >> number;
    cout << "Enter the numbers of lucky numbers: ";
    cin >> lucky;
    vector<int>winner;
    winner=Lotto(number,lucky);
    cout <<"The lucky numbers: \n";
    for(int i=0;i<winner.size();i++)
    {
        cout << winner[i] << " ";
        if((i+1)%5==0)
        cout << endl;
    }
    cin.get();
    cin.get();
    return 0;
}

vector<int> Lotto(int m,int n)
{
    vector<int>number1(m),number2(n);
    
    for(int i=0;i<m;i++)
    number1[i]=i+1;
    cout << "Numbers pool: \n";
    for(int i=0;i<m;i++)
    {
        cout << number1[i] << " ";
        if((i+1)%5==0)
        cout << endl;
    }
    cout << endl;
    for(int i=0;i<n;i++)
    {
        random_shuffle(number1.begin()+i,number1.end());
        number2[i]=*(number1.begin()+i);
    }
    sort(number2.begin(),number2.end());
    
    return number2;
}
