#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
void Show(int n);
const int LIM =10;
int main()
{
    int ar[LIM]={4,5,4,2,2,3,4,8,1,4};
    list<int>la(ar,ar+10);
    list<int>lb(la);
    
   cout << "Original list: \n";
   cout << "la: ";
   for_each(la.begin(),la.end(),Show);
   cout << endl;
   la.remove(4);
   cout << "After use remove(4) method: \n";
   cout << "la: ";
   for_each(la.begin(),la.end(),Show);
   cout << endl;
   
   list<int>::iterator last;
   last=remove(lb.begin(),lb.end(),4);
   cout << "After use remove() function: \n";
   cout << "lb: ";
   for_each(lb.begin(),lb.end(),Show);
   cout << endl;

   lb.erase(last,lb.end());
   cout <<"After erase & remove() function: \n";
   cout << "lb: ";
   for_each(lb.begin(),lb.end(),Show);
   cout << endl; 

   cin.get();
   cin.get();
   return 0;
}

void Show(int n)
{
    cout << n << " ";
}