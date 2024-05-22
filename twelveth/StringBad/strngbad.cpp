// strngbad.cpp -- StringBad class methods
#include<cstring>    //string.h for some
#include"strngbad.h"
using std::cout;

//initializing static class member
int StringBad::num_strings =0;

// class methods
// construct StringBad from C string
StringBad::StringBad(const char*s)
{
    len = std::strlen(s);    //set size
    str = new char[len+1];   // allot storage
    std::strcpy(str,s);   //initialize pointer
    num_strings++;    // set object count
    cout << num_strings << ": \"" << str << "\" object created\n";   
    //for your Information
}

StringBad::StringBad()    //default constructor
{
    len=4;
    str=new char[4];
    std::strcpy(str,"C++");   //default string
    num_strings++;
    cout << num_strings << ": \"" << str << "\" default object created\n"; //FYI
}

StringBad::~StringBad()  // necessary destructor
{
    cout << "\"" << str << "\" object delete, ";//FYI
    --num_strings;   //required
    cout << num_strings << " left\n";  //FYI
    delete [] str;   //required
}

std::ostream & operator<<(std::ostream& os,const StringBad&st)
{
    os << st.str;
    return os;
}

StringBad::StringBad(const StringBad & s1)
{
   len=s1.len;
   str=new char[len+1];
   std::strcpy(str,s1.str);
   num_strings++;    // set object count
   cout << num_strings << ": \"" << str << "\" object created\n";   
}
StringBad & StringBad::operator=(const StringBad & s1)
{
    if(this==&s1)
    return *this;
    delete [] str;
    len=s1.len;
    str=new char[len+1];
    std::strcpy(str,s1.str);
    return *this;
}