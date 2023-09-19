#include<iostream>
using namespace std;
const int length=10;
int Fill_array(double [],int);
void Show_array(double [],int);
void Reverse_array(double[],int);
int main()
{   
    double array1[length];
    cout << "Please enter several(max to 10) numbers in double: " << endl;
    int number=Fill_array(array1,length);
    if (number!=0)
    {
        cout << "This is the array what you input: "<< endl;
    Show_array(array1,number) ;
    cout << endl;

    cout << "If reversal the array and will be: " << endl;
    Reverse_array(array1,number);
    Show_array(array1,number) ;
    cout << endl;

    cout << "If reversal the array expect the beginning and the end,it will be: ";
    double fixx = array1[0];
    array1[0]=array1[number-1];
    array1[number-1]=fixx;
    cout << endl;
    Show_array(array1,number) ;
    }
    else if (number==0)
    cout << "It is a array with 0 element." << endl;
    cin.get();
    cin.get();
    return 0;
}
int Fill_array(double ar1 [],int n)
{   
    int i=0;
    while(i<n)
    {
        cout << i+1 << " : ";
        cin >> ar1[i];
        if (!cin)
        {
        cin.clear();
        cin.get();
        cin.get();
        break;
        }
        i++;
    }
    return i;
}
void Show_array(double ar1 [],int n)
{   
    int i=0;
    while(i<n)
    {
        cout << ar1[i] << " ";
        i++;
    }
}
void Reverse_array(double ar1[],int n)
{
    double t;
    for(int i=0;i<n/2;i++)
    {
        t=ar1[n-1-i];
        ar1[n-1-i]=ar1[i];
        ar1[i]=t;
        
    }
}