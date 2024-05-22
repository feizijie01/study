//const 引用可以连续赋值
//也能修改赋值

#include<iostream>
#include<cstring>
#include<new>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ostream;

class Teststring
{
    private:
    char * str;
    int len;
    public:
    Teststring(const char * p);
    Teststring(){len=0;str=nullptr;};
    ~Teststring();
    const Teststring & operator=(const Teststring &);
    const Teststring & operator=(const char *);
    friend ostream & operator<<(ostream & o1,const Teststring &);
};

Teststring::Teststring(const char * p)
{  
   len=std::strlen(p);
   str=new char[len+1];
   strcpy(str,p);
}

Teststring::~Teststring()
{
    delete [] str;
}

const Teststring & Teststring::operator=(const char * p)
{  
   delete [] str;
   len=strlen(p);
   str=new char[len+1];
   strcpy(str,p);
   return *this;
}

const Teststring & Teststring::operator=(const Teststring & t1)
{
    if(this == &t1)
    return *this;
    delete [] str;
    len=t1.len;
    str = new char[len+1];
    strcpy(str,t1.str);
    return *this;
}

ostream & operator<<(ostream & o1,const Teststring & t1)
{
    o1 << t1.str;
    o1 << endl;
    return o1;
}

int main()
{
    Teststring t1("ABCDE");
    Teststring t2,t3,t4;
    t4=t3=t2=t1;
    t2=t1="ABC";
    cout << t1 << t2 << t3 << t4;
    cin.get();
    cin.get();
    return 0;
}