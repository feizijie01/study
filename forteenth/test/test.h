#ifndef TEST_H_
#define TEST_H_
#include<iostream>
#include<string>
#include<valarray>
using std::string,std::istream,std::ostream;
typedef std::valarray<double> ArrayDb;
const int Max=5;
class Jicheng:private string,private ArrayDb
{   
    private:
    
    public:
    Jicheng():string("Null"),ArrayDb(){}
    explicit Jicheng(const string & name):string(name),ArrayDb(){}
    explicit Jicheng(int n):string("Null"),ArrayDb(n){}
    explicit Jicheng(const ArrayDb & a1):string("Null"),ArrayDb(a1){}
    Jicheng(const string & name,int n):string(name),ArrayDb(n){}
    Jicheng(const string & name,const ArrayDb & a1):string(name),ArrayDb(a1){}
    Jicheng(const char * name,double scores,int n):string(name),ArrayDb(scores,n){}
    
    friend istream & operator>>(istream & is, Jicheng & b1);
    friend istream & getline(istream & is, Jicheng & b1);
    friend ostream & operator<<(ostream & os,const Jicheng & b1);

    using ArrayDb::sum;
    using ArrayDb::operator[];
    using ArrayDb::max;
    using ArrayDb::min;

};
#endif