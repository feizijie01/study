#ifndef PRACTICE4_H_
#define PRACTICE4_H_
#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
using std::string;
using std::cout,std::endl,std::cin,std::ostream;

class Person
{
    private:
    string fn;
    string ln;
    
    
    public:
    virtual void Show();
    Person():fn("Null"),ln("Null"){}
    Person(string & f,string & l):fn(f),ln(l){}
    Person(const Person & p):fn(p.fn),ln(p.ln){}
};

class Gunslinger:virtual public Person
{
    private:
    double time;
    int kehen;
    
    
    public:
    Gunslinger():time(0),kehen(0),Person(){}
    Gunslinger(double t,int k,string & f,string & l)
    :time(t),kehen(k),Person(f,l){}
    Gunslinger(double t,int k,const Person & p)
    :time(t),kehen(k),Person(p){}
    double Draw(){return time;}
    void Show();
};

class Card
{
    private:
    string fc[4]={"Hearts","Diamonds","clubs","Spades"};
    int poke;
    string flowercolor;
    public:
    Card(){ poke=rand()%52+1;flowercolor=fc[rand()%4]; };
    friend std::ostream & operator<<(std::ostream & os,const Card &); 
};

class PokerPlayer:virtual public Person
{
    private:
    Card c;
    public:
    PokerPlayer():c(),Person(){}
    PokerPlayer(string & f,string & l):c(),Person(f,l){}
    PokerPlayer(const Person p):c(),Person(p){}
    Card & Draw(){return c;}
};

class Badude:public PokerPlayer,public Gunslinger
{
    public:
    Badude():Person(),PokerPlayer(),Gunslinger(){}
    Badude(string & f,string l,double t):
    Person(f,l),PokerPlayer(f,l),Gunslinger(t,0,f,l){}
    Badude(const Person & p,double t):
    Person(p),PokerPlayer(p),Gunslinger(t,0,p){}
    int Gdraw();
    Card & Cdraw();
    void Show();
};

#endif