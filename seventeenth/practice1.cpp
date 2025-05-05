#include<iostream>
int main()
{
    using namespace std;
    cout << "Enter the string.\n";
    char ch;
    int i=0;
    cin.get(ch);
    while(ch!='$')
    {   
        i++;
        cin.get(ch);
    }
    
    cout << i;
    cin.putback('$');
cin.get();
cin.get();
cin.get();
cin.get();

return 0;
}