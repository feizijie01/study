// smrtptrs.cpp -- using three kinds of smart pointers
// requires support of C++11 shared_ptr and unique_ptr
#include<iostream>
#include<string>
#include<memory>
using std::cout,std::string,std::cin,std::endl;
    

class Report
    {
        private:
        string str;
        public:
        Report(const string & s):str(s)
        {cout << "project create.\n";}
        ~Report(){cout << "project delete.\n";}
        void commen()const{cout << str << endl;}
    };

int main()
{
    {
        std::auto_ptr<Report>p1(new Report("Using auto_ptr"));
        p1->commen();
    }
    {
        std::shared_ptr<Report>p2(new Report("Using shared_ptr"));
        p2->commen();
    }
    {
        std::shared_ptr<Report>p3(new Report("Using unique_ptr"));
        p3->commen();
    }
    cin.get();
    cin.get();
    return 0;
}