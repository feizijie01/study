#include<iostream>
const int LIMIT=255;

int main()
{
    using std::cout,std::endl,std::cin;

    char input[LIMIT];
    cout << "Enter the string:\n";
    cin.getline(input,LIMIT,'#');
    cout << "Here is ur input:\n";
    cout << input << endl;

    char ch;
    cin.get(ch);
    cout << "The next char is " << ch << endl;

    if(ch!='\n')
    cin.ignore(LIMIT,'\n');


    cout << "Enter the string:\n";
    cin.get(input,LIMIT,'#');
    cout << "Here is ur input:\n";
    cout << input << endl;

    
    cin.get(ch);
    cout << "The next char is " << ch << endl;
    if(ch!='\n')
    cin.ignore(LIMIT,'\n');

    cin.get();
    cin.get();
    return 0;
}