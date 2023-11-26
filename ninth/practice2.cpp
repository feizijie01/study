//practice2.cpp

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// constant
const int ArSize=10;
//function prototype
void strcount(string str);
int main()
{   
    string input1;
    cout << "Enter a line:\n";
    getline(cin,input1);
    
    while(input1 !="")
    {  
        strcount(input1);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin,input1);
    }
    cout << "Bye.\n";
    cin.get();
    cin.get();
    cin.get();
    return 0;
}

void strcount(string str)
{
    static int total = 0;   //static local variable
    int count =0;   // automatic local variable
    int i=0;
    cout << "\"" << str << "\" contains ";
    while(str[i]!='\0')   // go to end of string
       { 
        i++;
        if(str[i]==' ')
         continue;
       
        count++;
        
       }
    total+=count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}