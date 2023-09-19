#include<iostream>
using namespace std;
long double probability(unsigned int,unsigned int);
int main()
{   
    int filed;
    long double p=1.0;
    while(1>0)
    {
      cout << "How many filed of the lotto? (q to quit)" << endl;
      cin >> filed;
       if(!cin)
       {
          cin.clear();
          if(cin.get()=='q')
          break;
          else
          {
            while(cin.get()!='\n')
            continue;
            cout << "Please enter the integer." << endl;
            continue;
          }
        }
      int total[filed],picks[filed];
      cout << "Now enter the total and picks in the lotto game: " << endl;

      for(int i=0;i<filed;i++)
     {  
        cout << "No."<< i+1 << ": ";
        cin >> total[i] >> picks[i];
          if(!cin)
          {
            cin.clear();
            if(cin.get()!='q')
           { 
             while(cin.get()!='\n')
             continue;
             cout << "Please enter the integer." << endl;
             i--;
             continue;
           }
           else
           filed=-1;  //filed 作为一个全局变量，可以对它赋值，用来做一些因果条件的判定
          
          }
        p=p*probability(total[i],picks[i]);
      } 
      if(filed=-1)
      break;
    
      cout << "Your zhongjiang gailv shi: " << p << endl;
      cout << "Another one." << endl;
 
    }
    cout << "It is done." << endl;
    cin.get();
    cin.get();
    cin.get();
    cin.get();

  
    return 0;
}
long double probability(unsigned int to,unsigned int pi)
{
  long double pa=1.0;
  while(pi<=to && pi >0)
  {
    
    pa=pa*to/pi;
    pi--,to--;
    
  }
  
  return pa;
}