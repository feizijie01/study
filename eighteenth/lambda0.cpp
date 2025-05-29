#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<ctime>

const long size1 = 39L;
const long size2 = 100*size1;
const long size3 = 100*size2;
bool f3(int x){return x%3==0;}
bool f13(int x){return x%13==0;}

int main()
{
    using namespace std;
    srand(time(0));

    vector<int>numbers(size1);
    cout << "Sample : " << size1 << endl;
    generate(numbers.begin(),numbers.end(),rand);
    int count3=count_if(numbers.begin(),numbers.end(),f3);
    cout << "Numbers divisible by 3 are : " << count3 << endl;
    int count13=count_if(numbers.begin(),numbers.end(),f13);
    cout << "Numbers divisible by 13 are : " << count13 << endl << endl;


    numbers.resize(size2);
    generate(numbers.begin(),numbers.end(),rand);
    cout << "Sample : " << size2 << endl;
    class f_mod
    {   
        private:
        int dv;
        public:
        f_mod(int n):dv(n){}
        bool operator()(int x){return x % dv==0;}
    };
    
    count3=count_if(numbers.begin(),numbers.end(),f_mod(3));
    cout << "Numbers divisible by 3 are : " << count3 << endl;
    count13=count_if(numbers.begin(),numbers.end(),f_mod(13));
    cout << "Numbers divisible by 13 are : " << count13 << endl << endl;
    

    numbers.resize(size3);
    generate(numbers.begin(),numbers.end(),rand);
    cout << "Sample : " << size3 << endl;

    count3=count_if(numbers.begin(),numbers.end(),[](int x){return x % 3==0;});
    cout << "Numbers divisible by 3 are : " << count3 << endl;
    count13=count_if(numbers.begin(),numbers.end(),[](int x){return x % 13==0;});
    cout << "Numbers divisible by 13 are : " << count13 << endl << endl;

    cin.get();
    return 0;
}