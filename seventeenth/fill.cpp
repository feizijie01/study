//fill.cpp -- changing fill charater for fields
#include<iostream>

int main()
{
    using namespace std;
    cout.fill('*');
    const char* staff[2] ={"Waldo Whipsnade","Wilmarie Wooper"};
    long bonus[2]={900,1350};

    for(int i=0;i<2;i++)
    {
        cout <<staff[i] << ": $";
        cout.width(7);
        cout << bonus[i] << "\n";
    }
    cin.get();
    cin.get();
    return 0;
}