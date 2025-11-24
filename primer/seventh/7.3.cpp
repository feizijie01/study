#include<iostream>
#include<string>
using namespace std;
struct person
{
   string name;
   string address;
   string getName()const{return name;}
   string getAddress()const{return address;}
};