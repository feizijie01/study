#include<iostream>
int main()
{
    /*
    using namespace std;
    typedef int int_arr[4];
    int_arr ar[3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int(*p)[4]=ar;p!=ar+3;p++)
    for(int *q=*p; q != *p+4;q++)
    cout << *q << endl;
    cin.get();
    return 0;
    
    */
    using namespace std;
    typedef int int_arr[4];
    int_arr ar[3]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto p=ar;p!=ar+3;p++)
    for(auto q=*p; q != *p+4;q++)
    cout << *q << endl;
    cin.get();
    return 0;
}