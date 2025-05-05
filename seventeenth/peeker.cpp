#include<iostream>

int main()
{
    using std::cout,std::endl,std::cin;
    
    char ch;
    while(cin.get(ch))
    {
        if(ch!='#')
        cout << ch;
        else
        {
            cin.putback(ch);
            break;
        }
    }
    if(ch!=EOF)
    {
        cin.get(ch);
    cout << endl << ch << " is the next input.\n";
    }
    else
    {
        cout << "It is end of file.\n";
        std::exit;
    }

    while(cin.peek()!='#')
    {   
        cin.get(ch);
        cout << ch;
    }
     if(ch!=EOF)
    {
        cin.get(ch);
    cout << endl << ch << " is the next input.";
    }
    else
    {
        cout << "It is end of file.\n";
    }
    cin.get();
    cin.get();
     cin.get();
    cin.get();
   
    return 0;

}