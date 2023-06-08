#include<iostream>
int main()
{
    using namespace std;
    cout  << "Enter words(q to quit): " << endl;
    int yuanyin,fuyin,others;
    yuanyin=fuyin=others=0;
    char words[50];
    cin >> words;
    while(!((words[1]=='\0') and (words[0]=='q')))
    {
        if(isalpha(words[0]))
        {
            if(words[0]=='a'||words[0]=='e'||words[0]=='i'||words[0]=='o'||words[0]=='u')
            yuanyin++;
            else
            fuyin++;
        }
        else 
        others++;
        cin >> words;
    }
    cout << "yuanyin: " << yuanyin << endl;
    cout << "fuyin: " << fuyin << endl;
    cout << "others: " << others << endl;
  
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
    cin.get();
   
    return 0;
}