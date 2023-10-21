#include<iostream>
using namespace std;
struct CandyBar{
    const char*bdname;
    double weight;
    int calories;
};

void fill(CandyBar&,const char*bdname="Millennim Munch",double weight=2.85,int calories=350);
void Show(const CandyBar &);

int main()
{
  
  CandyBar c1;
  CandyBar & rc1 = c1;
  char p[50];
  double weight;
  int calories;
  cout << "Please enter the brand name(bad input to quit): ";
  cin.getline(p,50);
  cout << "Please enter the weight in double(bad input to quit): ";
  cin >> weight;
  cout << "Please enter the calories in int(bad input to quit): ";
  cin >> calories;
  fill(rc1,p,weight,calories);
  cout << "The information: \n";
  Show(rc1);

  cin.get();
  cin.get();
  return 0;
}

void fill(CandyBar & rc1,const char* bdname,double weight,int calories)
{
    rc1.bdname=bdname;
    rc1.weight=weight;
    rc1.calories=calories;
}

void Show(const CandyBar & rc1)
{
    cout << rc1.bdname << endl;
    cout << rc1.weight << endl;
    cout <<  rc1.calories << endl;
}