#include"Sales_item.h"

int main()
{  
   cout << "Please enter Sales records:(bad input to quit) \n" ;
   vector<Sales_item>record;
   Sales_item temp;
   while(cin >> temp)
   record.push_back(temp);
 

   if(!cin)
   cin.clear();
   while(cin.get()!='\n')
   continue;
   
   if(record.size()==0)
   cout << "There no record.\n";
   else
   {
    cout << "Sales Record:\n";
    for(int i=0;i<record.size();i++)
    cout << record[i] << endl;
   }
   
   
    
    cin.get();
    cin.get();
    return 0;
}