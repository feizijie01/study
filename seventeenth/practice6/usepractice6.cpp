#include"emp.h"
const int MAX =10;

int main()
{   
    abstr_emp * pc[MAX];
    
    enum classkind{employee=1,manager,fink,highfink};
   
    ifstream fin;
    ofstream fout;
    const char * emp="empdata.txt";
    fin.open(emp);
    fout.open(emp,ios_base::app);
    
    //wen jian dabukai
    if(!fin.is_open() || !fout.is_open() )
    cerr << "Cant open the file.\n";
    
    //wenjian kongbai
    else if(fin.peek()==EOF)   
        {
        cout << "File have no data, Please enter the employee data:\n";
        int classt;
        int i=0;
        
        cout << "Please enter the class type(0 for Employee, 1 for Manager, 2 for Fink, 3 for HighFink, 4 to quit): ";
        while(i<MAX && classt!=5)
        {

            cin >> classt;
            cin.get();
            switch(classt)
               {
                case employee: pc[i] = new Employee;
                           pc[i]->SetAll();
                           i++;
                           break;

                case manager: pc[i] = new Manager;
                          pc[i]->SetAll();
                          i++;
                          break;

                case fink: pc[i] = new Fink;
                          pc[i]->SetAll();
                          i++;
                          break;

                case highfink: pc[i] = new HighFink;
                          pc[i]->SetAll();
                          i++;
                          break;
                  
                }
        if(classt!=5)        
        cout << "Please enter the class type(1 for Employee, 2 for Manager, 3 for Fink, 4 for HighFink, 5 to quit): ";
        }

        cout << "All ur input data: \n\n";

        for(int j=0;j<i;j++)
        {
            pc[j]->ShowAll();
            pc[j]->WriteAll(fout);
        }

        cout << "Done.\n";
        }
    
    else if(fin.peek()!=EOF)   //wenjian yicunzai
    {   
        int classt;
        int i=0;
        cout << "Data: \n";
        while(fin>>classt)    //read file data
        {   
            switch(classt)
            {
                case 1:pc[i] = new Employee;
                       pc[i]->GetAll(fin);
                       i++;
                       break;
                case 2:pc[i] = new Manager;
                       pc[i]->GetAll(fin);
                       i++;
                       break;
                case 3:pc[i] = new Fink;
                       pc[i]->GetAll(fin);
                       i++;
                       break;
                case 4:pc[i] = new HighFink;
                       pc[i]->GetAll(fin);
                       i++;
                       break;
            }
        }

        for(int j=0;j<i;j++)    //show file data
        {   
            cout << j+1 << "#:\n";
            pc[j]->ShowAll();
        }

        if(i<MAX)     //choose delete or add data
        cout << "Add or delete or quit(1 for Employee, 2 for Manager, 3 for Fink, 4 for HighFink, 5 to quit, 6 to delete): ";
        if(i==MAX)
        cout << "Must delete cause it reach MAX.Please enter 6 to delete or 5 to quit: ";
        while(i<=MAX && classt!=5)
        {
            cin >> classt;
            cin.get();
            switch(classt)
               {
                case employee: pc[i] = new Employee;
                           pc[i]->SetAll();
                           pc[i]->WriteAll(fout);
                           i++;
                           break;

                case manager: pc[i] = new Manager;
                          pc[i]->SetAll();
                          pc[i]->WriteAll(fout);
                          i++;
                          break;

                case fink: pc[i] = new Fink;
                          pc[i]->SetAll();
                          pc[i]->WriteAll(fout);
                          i++;
                          break;

                case highfink: pc[i] = new HighFink;
                          pc[i]->SetAll();
                          pc[i]->WriteAll(fout);
                          i++;
                          break;

                case 6: cout << "All the data: \n";   //delete data

                        for(int j=0;j<i;j++)
                       {   
                           cout << j+1 << "#:\n";
                           pc[j]->ShowAll();
                       }
                        cout << "Enter the order number which u want to delete?\n";
                        int n;
                        cin >> n;
                        
                        ofstream foutd;
                        foutd.open("empdata.txt");
                        
                        for(int j=0;j<i;j++)
                        {   
                            if(j!=n-1)
                            pc[j]->WriteAll(foutd);
                        }
                        foutd.close();
                        break;
                }
        if(classt!=5)
        cout << "Add or delete or quit(1 for Employee, 2 for Manager, 3 for Fink, 4 for HighFink, 5 to quit, 6 to delete): ";
        }

        cout << "All the data: \n";

        ifstream fin2;  
        fin2.open("empdata.txt");
        if(fin2.peek()==EOF)
        cout << "empty file now.\n";
        else    //after delete or add data. rewrite the file.
        {
            int classt2;
            int k=0;
         
            while(fin2>>classt2)  
          {   
             
              switch(classt2)
              {
                case 1:pc[k] = new Employee;
                       pc[k]->GetAll(fin2);
                       k++;
                       break;
                case 2:pc[k] = new Manager;
                       pc[k]->GetAll(fin2);
                       k++;
                       break;
                case 3:pc[k] = new Fink;
                       pc[k]->GetAll(fin2);
                       k++;
                       break;
                case 4:pc[k] = new HighFink;
                       pc[k]->GetAll(fin2);
                       k++;
                       break;
              }
           }

              for(int j=0;j<k;j++)   // show the new data in file.
             { 
               cout << j+1 << "#:\n";
               pc[j]->ShowAll();
             }
           fin2.close();
        }
        cout << "Done.\n";
    }
    fin.close();
    fout.close();
    cin.get();
    cin.get();
    return 0;
}