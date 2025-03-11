#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    cout << "Enter letters(quit to quit): ";
    string letters;
    while(cin >> letters && letters !="quit" )
    {
        sort(letters.begin(),letters.end());
        cout << "all combinations of " << letters << endl;
        while(next_permutation(letters.begin(),letters.end()))
        cout << letters << endl;
        cout << "Next one(quit to quit): ";
    }
    cout << "Done.";
    cin.get();
    cin.get();
    return 0;
}