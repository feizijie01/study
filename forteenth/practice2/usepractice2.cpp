#include<iostream>
#include"winc2.h"
int main()
{
    using std::cin,std::endl,std::cout;
    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab,50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab,yrs);    // store label,years,give arrays yrs elements
    holding.GetBottles();   // solicit input for year, bottle count
    holding.Show();    // display boject contents
    
    const int YRS =3;
    int y[YRS]={1993,1995,1998};
    int b[YRS]={48,60,72};
    //create new object,initialize using data in arrays y and b
    Wine more("Gushing Grape Red",YRS,y,b);
    more.Show();
    cout << "Total bottles for " << more.Label()  //use :abel() method
         << ": "<< more.sum() << endl;    //use sum() method
    cout << "Bye\n";
    cin.get();
    cin.get();
    return 0;
}