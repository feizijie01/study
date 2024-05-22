// string1.cpp -- String class methods
#include<cstring>    // string.h for some
#include "string1.h"   //includes<iostream>
using std::cin;
using std::cout;

//initialzing static class member
int String::num_strings=0;

//static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char*s)    //construct String from C string
{
    len=std::strlen(s);   // set size
    str=new char[len+1];  //allot storage
    std::strcpy(str,s);  // initialize pointer
    num_strings++;
}

String::String()    //default constructor
{
    len =4;
    str=new char[1];
    str[0]='\0';    //default string
    num_strings++;
}

String::String(const String&st)
{
    num_strings++;     //handle static member update
    len=st.len;   //same length
    str=new char[len+1];   //allot space
    std::strcpy(str,st.str);  // copy string t new location
}

String::~String()   //necessary destructor
{
    --num_strings;   //required
    delete [] str;  //required
}

//overloaded operator methods

// assign a String to a String
String & String::operator=(const String & st)
{
    if(this==&st)
    return *this;
    delete []  str;
    len=st.len;
    str=new char[len+1];
    strcpy(str,st.str);
    return * this;
}

//assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len=strlen(s);
    str =new char[len+1];
    strcpy(str,s);
    return *this;
}

//read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

//read-only char access for const String
const char & String::operator[](int i)const
{
    return str[i];
}

//overloaded oeprator friends

bool operator<(const String &s1,const String &s2)
{
    return(std::strcmp(s1.str,s2.str)<0);
}

bool operator>(const String &s1,const String &s2)
{
    return s2<s1;
}

bool operator==(const String&s1,const String &s2)
{
    return(std::strcmp(s1.str,s2.str)==0);
}

//simple String output
ostream & operator<<(ostream & os,const String &s1)
{   
    os << s1.str;
    return os;
}

//quick and dirty String input
istream & operator>>(istream & is,String&s1)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
    s1=temp;
    while(is && is.get() !='\n')
    continue;
    return is;
}

