#include<iostream>
int main()
{   
    /*
    using namespace std;
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    typedef int int_arr[4];
    for(int_arr & ar1:ia)
    for(int &a2:ar1)
    cout << a2 << endl;
    cin.get();
    return 0;
    */ 

    using namespace std;
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto & ar1:ia)
    for(auto &a2:ar1)
    cout << a2 << endl;
    cin.get();
    return 0;
    

}