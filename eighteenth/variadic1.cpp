#include<iostream>
#include<string>
using namespace std;

void showlist3(){}

template<typename T,typename...Arges>
void showlist3(T value,Arges...arges)
{
    cout << value << endl;
    showlist3(arges...);
}

int main()
{
    int n=8;
    double y=3.14;
    string mr="mr.brown.";
    showlist3(n,y);
    showlist3(n*n,'!',7,mr);
    cin.get();
    return 0;
}

