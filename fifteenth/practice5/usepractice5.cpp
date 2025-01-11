#include"practice5.h"

int main()
{
    double vales1[12]={1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1};
    double vales2[12]={1.2,2.2,3.2,4.2,5.2,6.2,7.2,8.2,9.2,10.2,11.2,12.2};

    Sales sales1(2011,vales1,12);
    LabeledSales sales2(2012,vales2,12,"BlogStar");

    cout << "First try block: \n";
    try{
        int i;
        cout << "Year: " << sales1.Year() << endl;
        for(i=0;i<12;i++)
        {   
            cout << sales1[i] << ' ';
            if(i%6==5)
            cout << endl;
        }
        cout << endl;

        cout << "Year: " << sales2.Year() << endl;
        cout << "Company: " << sales2.Label() << endl;
         for(i=0;i<=12;i++)
        {   
            cout << sales2[i] << ' ';
            if(i%6==5)
            cout << endl;
        }
    }
  
    catch(Sales::bad_dex & bad)
    {
        bad.what();
        cout << "Error index: " << bad.bi_value() << endl;
        try{
        LabeledSales::nbad_dex & bp=dynamic_cast<LabeledSales::nbad_dex &>(bad);
        bp.BadLabel();
        }
        catch(std::bad_cast &)
        {
            cout << "bad_cast error.\n";
        }
    }
    cout << "End of first.\n";
    
    cout << "Second try block: \n";
    try{
        sales2[2]=2.3;
        sales1[20]=2.5;
    }
    catch(Sales::bad_dex & bad)
    {
        bad.what();
        cout << "Error index: " << bad.bi_value() << endl;
        try{
        LabeledSales::nbad_dex & bp=dynamic_cast<LabeledSales::nbad_dex &>(bad);
        bp.BadLabel();
        }
        catch(std::bad_cast &)
        {
            cout << "bad_cast error.\n";
            cout << "bad_dex error.\n";     //试试用指针而不是引用
        }
    }
    cout << "End.\n";
    cin.get();
    cin.get();
    return 0;
}