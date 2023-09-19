//修改程序7.7的三个数组函数，让它们的参数为2个指针，其中第二个指针指向最后被填充的位置
#include<iostream>
const int Max=5;
using namespace std;
double* fill_array(double ar[],int Max);
void show_array(const double ar[],const double br[]);
void revalue(double r,double ar[],double br[]);
main()
{  
   double data[Max];
   double r;
   cout << "Please enter the data in double: (negative and letter to quit)" << endl;
   double *pz=fill_array(data,Max);
   
   if(data!=pz)
   {
    cout << "So the data is: " << endl;
    show_array(data,pz);
    cout << "Please enter the r: ";
   while(!(cin>>r))
   {
    cin.clear();
    while(cin.get()!='\n')
    continue;
    cout << "Please enter the r in double: ";
    continue;
   }
    
    revalue(r,data,pz);
    cout << "The new data are: "<< endl;
    show_array(data,pz);
   }
   else if (data==pz)
   cout << "There are no any data.";
   cin.get();
   cin.get();
   return 0;

}


double* fill_array(double ar [],int Max)
{   
    double*pz;
    int i=0;
    while(i<Max)
    {   
        cout << "data " << i+1 << ": " ; 
        cin >> ar[i];
        if (ar[i] < 0)
        break;
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')
            continue;
            break;      
        }
        i++;
    }
    return pz=ar+i;
}

void show_array(const double *ar,const double*pz)
{   
    int i=0;
    while((ar+i)!=pz)
    {
        cout << "data " << i+1 <<  ": " << ar[i] << endl;
        i++;
    }
}

void revalue(double r,double* ar,double*pz)
{
    int i=0;
    while((ar+i)!=pz)
    {
        ar[i]*=r;
        i++;
    }
}
