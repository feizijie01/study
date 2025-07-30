#include"Sales_item.h"
int main()
{  
   cout << "Please enter Sales records:(bad input to quit) \n" ;
   vector<Sales_item>record;
   list<string>isbns;
   vector<string>isbns2;
   Sales_item temp;

   //input the record
   while(cin >> temp)
   record.push_back(temp);
 
   if(!cin)
   cin.clear();
   while(cin.get()!='\n')
   continue;
   
   //input the isbn
   if(record.size()==0)
   cout << "There no record.\n";
   else
   {
    cout << "Sales Record:\n";
    for(int i=0;i<record.size();i++)
    {
        cout << record[i] << endl;
        isbns.push_back(record[i].ISBN());
    }
   }
  
   //sort and input the isbn to vector
   isbns.sort();
   for(auto p=isbns.begin();p!=isbns.end();p++)
   isbns2.push_back(*p);
 
   //count
   int count=1;
   for(auto p1=isbns2.begin();p1!=isbns2.end();p1++)
   {
    
    if(*p1!=*(p1+1))
    {
        cout << *p1 << ": " << count << endl;
        count=1;
    }
    else
    {
        count++;
        if(p1==isbns2.end()-1)
        cout << *p1 << ": " << count << endl;
    }
    
   }
  
    cin.get();
    cin.get();
    return 0;
}