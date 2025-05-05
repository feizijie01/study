#include<iostream>
#include<fstream>
#include<string>

int main()
{
    using namespace std;
    string filename;
    cout << "Please enter the filename: ";
    cin >> filename;
    ofstream fout(filename.c_str());
    fout << "For ur eyes only.\n";
    cout << "Enter the screct number: ";
    float number;
    cin >> number;
    fout << "Your screct number is " << number << endl;
    fout.close();

    ifstream fin(filename.c_str());
    char ch;
    cout << "Here are the content of " << filename << endl;
    while(fin.get(ch))
    cout << ch;
    fin.close();
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}