#include"string2.h"
#include<iostream>
#include<cstring>
#include<cctype>

String::String(const char * s)
{
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    num_strings++;
}

String::String()
{
    len=0;
    str=nullptr;
    num_strings++;
}

String::String(const String &s)
{
    len=s.len;
    str=new char[len+1];
    strcpy(str,s.str);
    num_strings++;
}

String::~String()
{   
    --num_strings;
    delete [] str;
}

void String::stringlow()
  { 
    for(int i=0;i<len;i++)
    str[i]=tolower(str[i]);
  }

void String::stringup()
  {
    for(int i=0;i<len;i++)
    str[i]=toupper(str[i]);
  }

int String::chaxun(const char ch)
{   
    int n=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch)
        n++;
    }
    return n;
}

String &  String::operator=(const String & s)
{   
    if(this==&s)
    return *this;
    len=s.len;
    delete [] str;
    str=new char[len+1];
    strcpy(str,s.str);
    return *this;
}

String  operator+(String &st1,String &st2)
{
    String st;
    st.len=st1.len+st2.len;
    st.str=new char[st.len+1];
    strcpy(st.str,st1.str);
    strcpy(st.str+st1.len,st2.str);
    return st;
}

String  operator+(const char*p,String &st2)
{
   String st1;
   st1=p;
   
   return st1+st2;
}

String  operator+(String &st2,char*p)
{
    return p+st2;
}

bool operator<(const String &st,const String &st2)
{
    return strcmp(st.str,st2.str)<0;
}

bool operator>(const String &st1,const String &st2)
{
    return st2<st1;
}

bool operator==(const String &st,const String &st2)
{
    return strcmp(st.str,st2.str)==0;
}

ostream & operator<<(ostream & os,const String &st)
{
    os<<st.str;
    return os;
}

istream & operator >>(istream & is,String &s1)
{
    
    delete [] s1.str;
    s1.str=new char[String::CINLIM+1];
    is.get(s1.str,String::CINLIM);
    s1.len=strlen(s1.str);
    while(is && is.get() !='\n')
    continue;
    return is;
}