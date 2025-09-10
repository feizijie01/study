#include<iostream>
int main()
{
    using namespace std;
    char ch;
    int inta=0,inte=0,inti=0,into=0,intu=0;
    while(cin >> ch && ch !='.')
    {
        if(ch=='a' or ch=='A')
        inta++;
        if(ch=='e' or ch=='E')
        inte++;
        if(ch=='i' or ch=='I')
        inti++;
        if(ch=='o' or ch=='O')
        into++;
        if(ch=='u' or ch=='U')
        intu++;
    }
    cout << "A: " << inta << endl;
    cout << "E: " << inte << endl;
    cout << "I: " << inti << endl;
    cout << "O: " << into << endl;
    cout << "U: " << intu << endl;
    cin.get();
    cin.get();
    return 0;
}