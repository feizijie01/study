#ifndef EMP_H_
#define EMP_H_
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class abstr_emp
{
    private:
    string fname;
    string lname;
    string job;
    public:
    abstr_emp():fname("No"),lname("one"),job("Nothing"){};
    abstr_emp(const string & fn,const string & ln,const string & j)
    :fname(fn),lname(ln),job(j){}
    virtual void ShowAll()const;
    virtual void SetAll();
    virtual void WriteAll(ofstream &);
    virtual void GetAll(ifstream &);
    virtual ~abstr_emp()=0;
};

class Employee : public abstr_emp
{
    public:
    Employee():abstr_emp(){}
    Employee(const string & fn,const string & ln,const string & j):abstr_emp(fn,ln,j){}
    Employee(const Employee & e):abstr_emp(e){}
    virtual void ShowAll()const;
    virtual void SetAll();
    virtual void WriteAll(ofstream &);
    virtual void GetAll(ifstream &);
};

class Manager: virtual public abstr_emp
{
    private:
    int inchargeof;
    protected:
    int InChargeOf()const {return inchargeof;}
    int & InChargeOf(){return inchargeof;}
    public:
    Manager():abstr_emp(),inchargeof(0){}
    Manager(const string & fn,const string & ln,const string & j,int n)
    :abstr_emp(fn,ln,j),inchargeof(n){}
    Manager(const abstr_emp & e,int n):abstr_emp(e),inchargeof(n){}
    Manager(const Manager & m):abstr_emp(m),inchargeof(m.inchargeof){}
    
    virtual void ShowAll()const;
    virtual void SetAll();
    virtual void WriteAll(ofstream &);
    virtual void GetAll(ifstream &);
};

class Fink:virtual public abstr_emp
{
    private:
    string  reporto;
    protected:
    string Reportto()const{return reporto;}
    string & Reportto(){return reporto;}
    public:
    Fink():abstr_emp(),reporto("No one"){}
    Fink(const string & fn,const string & ln,const string & j,const string & repo)
    :abstr_emp(fn,ln,j),reporto(repo){}
    Fink(const abstr_emp & e,const string & repo):abstr_emp(e),reporto(repo){}
    Fink(const Fink & f):abstr_emp(f),reporto(f.reporto){}
    virtual void ShowAll()const;
    virtual void SetAll();
    virtual void WriteAll(ofstream &);
    virtual void GetAll(ifstream &);
};

class HighFink:public Manager,public Fink
{
    public:
    HighFink():abstr_emp(),Manager(),Fink(){}
    HighFink(const string & fn,const string & ln,const string & j,int n,const string repo)
    :abstr_emp(fn,ln,j),Manager(fn,ln,j,n),Fink(fn,ln,j,repo){}

    HighFink(const Manager & m,const string & repo)
    :abstr_emp(m),Manager(m),Fink(m,repo){}

    HighFink(const Fink & f,int n)
    :abstr_emp(f),Manager(f,n),Fink(f){}
    
    HighFink(const HighFink & HF)
    :abstr_emp(HF),Manager(HF),Fink(HF){}

    virtual void ShowAll()const;
    virtual void SetAll();
    virtual void WriteAll(ofstream &);
    virtual void GetAll(ifstream &);
};

#endif