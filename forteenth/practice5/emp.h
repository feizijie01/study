#ifndef EMP_H_
#define EMP_H_
#include<iostream>
#include<string>
using namespace std;
class abstr_emp
{
    private:
    string fname;  // abstr_emp's first name
    string lname;  // abstr_emp's last name
    string job;
    
    public:
    abstr_emp():fname("No"),lname("one"),job("none"){};
    abstr_emp(const string & fn,const string & ln,const string &j)
    :fname(fn),lname(ln),job(j){}
    
    virtual void ShowAll() const;   //labels and shows all data
    virtual void SetAll();    //prompts user for values
    friend ostream & operator<<(ostream & os,const abstr_emp & e);
    //just displays first and last name;
    virtual ~abstr_emp()=0;  // virtual base class
};

class employee:public abstr_emp
{
    public:
    employee():abstr_emp(){};
    employee(const string & fn,const string & ln,const string &j)
    :abstr_emp(fn,ln,j){}
    virtual void ShowAll()const;
    virtual void SetAll();
};

class manager: virtual public abstr_emp
{
    private:
    int inchargeof;   //number of abstr_emps managed
    protected:
    int InChargeOf()const{return inchargeof;}  //output
    int & InChargeOf(){return inchargeof;}   //input

    public:
    manager():abstr_emp(),inchargeof(0){};
    manager(const string & fn,const string & ln,const string & j,
    int ico =0):abstr_emp(fn,ln,j),inchargeof(ico){}

    manager(const abstr_emp & e,int ico):abstr_emp(e),inchargeof(ico){}

    manager(const manager & m):abstr_emp(m),inchargeof(m.inchargeof){}

    virtual void ShowAll()const;
    virtual void SetAll();
};

class fink:virtual public abstr_emp
{
    private:
    string reportsto;   //to whom fink reports
    protected:
    const string ReportsTo()const{return reportsto;}
    string & ReportsTo(){return reportsto;}
    public:
    fink():reportsto("No One"){}
    fink(const string & fn,const string & ln,const string & j,const string & rpo ):
    abstr_emp(fn,ln,j),reportsto(rpo){};
    fink(const abstr_emp & e,const string & rpo):abstr_emp(e),reportsto(rpo){}
    fink(const fink & e):abstr_emp(e),reportsto(e.reportsto){}
    virtual void ShowAll()const;
    virtual void SetAll();
};

class highfink:public manager,public fink   //management fink
{
    public:
    highfink():abstr_emp(),manager(),fink(){}
    highfink(const string & fn,const string & ln,const string &j,
    const string & rpo,int ico):
    abstr_emp(fn,ln,j),manager(fn,ln,j,ico),fink(fn,ln,j,rpo){}
    highfink(const abstr_emp & e,const string & rpo,int ico):
    abstr_emp(e),manager(e,ico),fink(e,rpo){}
    highfink(const fink & f,int ico):abstr_emp(f),manager(f,ico),
    fink(f){}
    highfink(const manager & m,const string & rpo)
    :abstr_emp(m),manager(m),fink(m,rpo){}
    highfink(const highfink & h):abstr_emp(h),manager(h),fink(h){}
    virtual void ShowAll()const;
    virtual void SetAll();
};

#endif