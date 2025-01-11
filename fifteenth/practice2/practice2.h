#ifndef PRACTICE2_H_
#define PRACTICE2_H_
#include<iostream>
#include<stdexcept>
using std::cout,std::endl,std::cin,std::logic_error;

class bad_hmean:public logic_error
{
    public:
    bad_hmean():logic_error("invaild argument.\n"){}
    void what();
};

inline void bad_hmean::what()
{
    cout << "hmean()\n";
    cout << "invaild argument.\n";
}

class bad_gmean:public logic_error
{
    public:
    bad_gmean():logic_error("The argument must be >=0.\n"){}
    void what();
};

inline void bad_gmean::what()
{
    cout << "gmean()\n";
    cout << "The argument must be >=0.\n";
}

#endif