#ifndef STRING2_H_
#define STRING2_H_
#include<iostream>
using std::ostream;
using std::istream;
static int num_strings=0;
class String
{
    private:
    char*str;
    int len;
    
    static const int CINLIM = 80;
    public:
    //constructors and other methods
    String(const char *s);
    String();
    String(const String &);
    ~String();
    int length() const{return len;}
    void stringlow();
    void stringup();
    int chaxun(const char); 
    String & operator=(const String &);
    // overloaded oeprator methods
    friend String  operator+(String &st1,String &st2);
    friend String  operator+(const char*p,String &st2);
    friend String  operator+(String &st2,char*p);
    friend bool operator<(const String &st,const String &st2);
    friend bool operator>(const String &st1,const String &st2);
    friend bool operator==(const String &st,const String &st2);
    friend ostream & operator<<(ostream & os,const String &st);
    friend istream & operator >>(istream & is,String &st);
    static int HowMany();
};

#endif