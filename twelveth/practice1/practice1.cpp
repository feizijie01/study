#include<iostream>
#include"practice1.h"
#include<cstring>
using std::strcpy;
using std::cout;
Cow::Cow()
{   
    std::cout << "MoRen.\n";
    strcpy(name,"null");
    hobby=nullptr;
    weight=0;
}

Cow::Cow(const char * nm,const char*ho,double wt)
{
    strcpy(name,nm);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}

Cow::Cow(const Cow &c)
{ 
    std::cout << "start Copy.\n";
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    
}

Cow::~Cow()
{   
    delete [] hobby;
    std::cout << "The cow was deleted.\n";
}

Cow & Cow::operator=(const Cow & c)
{
    std::cout << "start Assigment.\n";
    if(&c==this)
    return *this;
   
    delete [] hobby;
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "Name: " << name << std::endl;
    if(hobby==nullptr)
    std::cout << "Hobby: nullptr"  << std::endl;
    else
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout  << std::endl;
}