#include<iostream>
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Please enter the distance in longs: ";
    int longs;
    cin >> longs;
    cout << "There are " << longs*220 << " Mas.";
    cin.get();
    cin.get();
    return 0;
}