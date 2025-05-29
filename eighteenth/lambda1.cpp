#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>

const long size1=390000L;
using namespace std;

int main()
{   
    srand(time(0));
    vector<int>numbers(size1);
    cout << "Sample : " << size1 << endl;

    generate(numbers.begin(),numbers.end(),rand);

    int count3 = count_if(numbers.begin(),numbers.end(),[](int x){return x % 3==0;});
    cout << "Numbers of divisible by 3 are : " << count3 << endl;
    int count13=0;
    for_each(numbers.begin(),numbers.end(),[&](int x){count13 += x%13==0;});
    cout << "Numbers of divisible by 13 are : " << count13 << endl;

    count3=count13=0;
    for_each(numbers.begin(),numbers.end(),[&](int x){count13 += x%13==0;count3 += x% 3==0;});
    cout << "Numbers of divisible by 3 are : " << count3 << endl;
    cout << "Numbers of divisible by 13 are : " << count13 << endl; 
    cin.get();
    return 0;
}