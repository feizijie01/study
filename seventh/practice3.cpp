//calculate average score of golf
#include<iostream>
const int Maxscore=10;
using namespace std;
int input(double scores[]);
void show(double showscores[],int);
double calculate(double [],int);
int main()
{
  
  cout << "Please enter all(max is 10) your golf scores in double(q to quit) : " << endl;
  double *scores=new double[Maxscore];   //想清楚数组与int参数的关系，无需削短Maxscore
  int n=input(scores);
  show(scores,n);
  cout <<"The averagescore of golf is: " << calculate(scores,n);
  cin.get();
  cin.get();
  return 0;
}
int input(double scores[])
{
  int i=0;
  while(1>0)
  {
    cout << i+1 << " : ";
    if(cin >> scores[i])
    {
      i++;
      if (i==10)
      break;
      continue;
    }
    
    cin.clear();
    if(cin.get()=='q')
    break;
    else
    while(cin.get()!='\n')
    continue;
    cout << "Please enter the double " << endl;
    continue;
  }
  return i;
}
void show(double showscores[],int n)
{  
  cout << "All the socres are: " << endl;
  for(int i=0;i<n;i++)
  cout << showscores[i] << " ";
  cout << endl;
}

double calculate(double scores[],int n)
{
  double total=0;
  for(int i=0;i<n;i++)
  total += scores[i];
  return total;
}