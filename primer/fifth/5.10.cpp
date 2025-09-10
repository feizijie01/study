#include<iostream>
int main()
{
    using namespace std;
    char ch;
    int inta=0,inte=0,inti=0,into=0,intu=0,intfi=0,intfl=0,intff=0;
    while(cin >> ch && ch != '.')
    {
    switch(ch)
    {   
        case 'A':
        case 'a':
        inta++;
        break;
        case 'E':
        case 'e':
        inte++;
        break;
        case 'I':
        case 'i':
        inti++;
        break;
        case 'O':
        case 'o':
        into++;
        break;
        case 'U':
        case 'u':
        intu++;
        break;
        case 'f':
        if(cin.peek()=='i')
        intfi++;
        if(cin.peek()=='f')
        intff++;
        if(cin.peek()=='l')
        intfl++;
        break;
    }
   }
   cout << "A: " << inta << endl;
    cout << "E: " << inte << endl;
    cout << "I: " << inti << endl;
    cout << "O: " << into << endl;
    cout << "U: " << intu << endl;
    cout << "ff: "<<intff << endl;
    cout << "fl: "<< intfl << endl;
    cout << "fi: "<< intfi << endl;
   cin.get();
   cin.get();
   return 0;
}