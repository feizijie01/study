#include"p7stonewt.h"
using std::cin;
using std::cout;
using std::endl;
int main()
{
    Stonewt starray[6]={150,160,170};
    int n=3;
    cout << "Please enter the last three duixiang: " << endl;
    while (n<6)
    {   
        double m;
        cin >> m;
        starray[n]=m;
        n++;
    }

    Stonewt max(0),min;
    Stonewt bijiao(11*14);
    int bigger=0;
    for (int i=0;i<6;i++)
    {
       max=max>=starray[i]?max:starray[i];
       if(i==0)
       min=starray[i];
       min=min<=starray[i]?min:starray[i];
       if(starray[i]>=bijiao)
       bigger++;
       cout << i << endl;
    }
    cout << "Max: ";
    max.show_lbs();
    cout << "Min: ";
    min.show_lbs();
    cout << "The number of Stonewt duixiangs bigger than 11 stone : " << bigger;
    cin.get();
    cin.get();
    return 0;
}