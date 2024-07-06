#include"practice2.h"
#include<cstring>
#include<iostream>
using std::cout,std::cin,std::endl;
Cd::Cd(const char * s1,const char * s2,int n,double x)
{  
   performers=new char[strlen(s1)+1];
   strcpy(performers,s1);
   label = new char[strlen(s2)+1];
   strcpy(label,s2);
   selections=n;
   playtime=x; 
}

Cd::Cd(const Cd & c)
{   
    performers=new char[strlen(c.performers)+1];
    strcpy(performers,c.performers);
    label=new char[strlen(c.label)+1];
    strcpy(label,c.label);
    selections=c.selections;
    playtime=c.playtime;
}

Cd::Cd()
{  
   performers=new char[5];
   strcpy(performers,"none");
   label = new char[8];
   strcpy(label,"nothing");
   selections=playtime=0;
}

Cd::~Cd(){}

void Cd::Report()const
{ 
   cout << "Performers: " << performers << endl;
   cout << "Label: " << label << endl;
   cout << "Selections: " << selections << endl;
   cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & c)
{   
    if(this==&c)
    return *this; 
    delete [] performers;
    delete [] label; 
    performers=new char[strlen(c.performers)+1];
    strcpy(performers,c.performers);
    label=new char[strlen(c.label)+1];
    strcpy(label,c.label);
    selections=c.selections;
    playtime=c.playtime;
    return *this;
}

//Classic methods
Classic::Classic(const char * c1,const char*s1,const char*s2,int n,double x):Cd(s1,s2,n,x)
{
    classic = new char[strlen(c1)+1];
    strcpy(classic,c1);
}

Classic::Classic(const char*c1,const Cd & c):Cd(c)
{
    classic=new char[strlen(c1)+1];
    strcpy(classic,c1);
}

Classic::Classic():Cd()
{
    classic=new char[6];
    strcpy(classic,"none.");
}

Classic::~Classic()
{   
    
    delete [] classic;
    
}

void Classic::Report()const
{   
    ((Cd)(*this)).Report();
    cout << "Classic: " << classic << endl;
}

Classic & Classic::operator=(const Classic & c)
{
   if(this==&c)
   return *this;
   Cd::operator=(c);
   
   delete [] classic;
   
   classic = new char[strlen(c.classic)+1];
   strcpy(classic,c.classic);
   
   return *this;
}