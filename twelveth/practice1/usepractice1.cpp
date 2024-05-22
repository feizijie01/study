#include<iostream>
#include"practice1.h"
#include<cstring>
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    
    {
    Cow c1;
    Cow c2("xiaobai","chicao",200);
    Cow cc("xiaohei","chimao",300);
    c1.ShowCow();
    
    
    c2.ShowCow();
    Cow c3;
    c3=cc;
    Cow c4(c2);
    c3.ShowCow();
    c4.ShowCow();
    }
    cout << "DONE.";
    cin.get();
    cin.get();
    return 0;
}