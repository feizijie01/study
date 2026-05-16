#include<iostream>
#include<string>
#include<cctype>
using namespace std;
class translatedate
{
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
public:
    translatedate(string s);
    void shuchu()
    {
        cout <<year << "/" << month << "/" << day << endl; }
};

translatedate::translatedate(string s)
{
    if(isalpha(s[0]))
    {   
        if(s.substr(0,3)=="Jan")
        month=1;
        else if(s.substr(0,3)=="Feb")
        month=2;
        else if(s.substr(0,3)=="Mar")
        month=3;
        else if(s.substr(0,3)=="Apr")
        month=4;
        else if(s.substr(0,3)=="Mar")
        month=5;
        else if(s.substr(0,3)=="Jun")
        month=6;
        else if(s.substr(0,3)=="Jul")
        month=7;
        else if(s.substr(0,3)=="Aug")
        month=8;
        else if(s.substr(0,3)=="Sep")
        month=9;
        else if(s.substr(0,3)=="Oct")
        month=10;
        else if(s.substr(0,3)=="Nov")
        month=11;
        else if(s.substr(0,3)=="Dec")
        month=12;

        day=stoi(s.substr(s.find_first_of("01234567890")));
        year=stoi(s.substr(s.find_last_not_of("0123456789")+1));
    }
    else
    {
        month=stoi(s);
        day=stoi(s.substr(s.find_first_not_of("0123456789")+1));
        year=stoi(s.substr(s.find_last_not_of("0123456789")+1));
    }
}

int main()
{
    translatedate t1("April 1, 1900");
    translatedate t2("Feb 1 1900");
    translatedate t3("1/1/1990");
    t1.shuchu();
    t2.shuchu();
    t3.shuchu();
    cin.get();
    return 0;
}


