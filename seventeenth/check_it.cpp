#include<iostream>

int main()
{
    using std::cin,std::cout,std::endl;
    int input=0;
    int sum=0;
    while(cin >> input)
    sum+=input;
    cout << "last value : " << input << endl;
    cout << "sum: " << sum << endl;
    cin.get();
    cin.get();
    return 0;
}