#include<vector>
#include<list>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<iterator>
using namespace std;
const long nums=100000;
void fuzhi(int & n);
int main()
{   
    srand(time(0));
    vector<int>vi0(nums);
    for_each(vi0.begin(),vi0.end(),fuzhi);
   
    vector<int>vi(vi0);
    list<int>li(nums);
    copy(vi0.begin(),vi0.end(),li.begin());
    cout << "Time for vi sort: " << endl;
    clock_t start = clock();
    sort(vi.begin(),vi.end());
    clock_t end=clock();
    cout<<(double)(end-start)/CLOCKS_PER_SEC << endl;
    
    cout << "Time for li sort: " << endl;
    clock_t start1 = clock();
    li.sort();
    clock_t end1=clock();
    cout<<(double)(end1-start1)/CLOCKS_PER_SEC << endl;
    
    cout << "Time for li=>vi sort=>li: " << endl;
    copy(vi0.begin(),vi0.end(),li.begin());
    clock_t start2 = clock();
    copy(li.begin(),li.end(),vi.begin());
    sort(vi.begin(),vi.end());
    copy(vi.begin(),vi.end(),li.begin());
    clock_t end2=clock();
    cout<<(double)(end2-start2)/CLOCKS_PER_SEC << endl;
    
    cin.get();
    cin.get();
    return 0;
}
void fuzhi(int & n)
{   
    
    n=rand();
}