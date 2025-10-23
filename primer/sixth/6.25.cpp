#include<iostream>
#include<string>
using namespace std;
int main(int argc,char * argv[])
{   
    if(argc<3)
    {
        cerr << argv[0] << "+参数1+参数2" << endl;
        return 1;
    }
    string result;
    for(int i=0;i<argc;i++)
    {
        result+=argv[i];
    }
    cout << result << endl;
    cin.get();
    return 0;
}