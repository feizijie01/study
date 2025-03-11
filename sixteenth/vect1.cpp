// vect1.cpp -- introducing the vector template
#include<iostream>
#include<string>
#include<vector>

const int NUM = 5;

int main()
{
    using namespace std;
    vector<int>rating(NUM);
    vector<string>titles(NUM);

    cout << "Please Enter " << NUM << " titles and ratings.\n";

    for(int i=0;i<NUM;i++)
    {
        cout << "Enter #" << i+1 << " Titles: ";
        getline(cin,titles[i]);
        cout << "Rating: ";
        cin >> rating[i];
        cin.get();
    }
    cout << "Thanks , u have entered following:\n";
    cout << "rating\ttittle\n";
    for(int i=0;i<NUM;i++)
    {
        cout << rating[i] << "\t" << titles[i] << endl;
    }
    cin.get();
    cin.get();
    return 0;
}