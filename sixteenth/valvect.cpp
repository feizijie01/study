#include<iostream>
#include<vector>
#include<valarray>
#include<algorithm>

using namespace std;

int main()
{
    vector<double>data;
    double temp;
    cout << "Please enter data(<=0 to quit): \n";
    while(cin >> temp && temp > 0)
    data.push_back(temp);
    sort(data.begin(),data.end());
    int size=data.size();

    valarray<double>numbers(size),s_qrts(size),results(size);
    for(int i=0;i<size;i++)
    numbers[i]=data[i];
    s_qrts=sqrt(numbers);
    results=numbers+2.0*s_qrts;
    
    cout << "Result:\n";
    cout.setf(ios_base::fixed);
    cout.precision(4);
    for(int i=0;i<size;i++)
    {   
        cout.width(8);
        cout << numbers[i] << " : " ;
        cout.width(8);
        cout << results[i];
        cout << endl;
    }
    cin.get();
    cin.get();
    return 0;
}