#ifndef TEST_H_
#define TEST_H_
#include<iostream>
class Customer
{
    private:
    int processtime;
    long arrive;
    public:
    Customer(){arrive=processtime=0;};
    long when()const {return arrive;};
    int ptime()const {return processtime;};
    void set(long when);
};

typedef Customer Item;

class Queue
{
    private:
    enum {Q_SIZE=10};
    struct Node{Item item;Node*next;};
    Node * front;
    Node * end;
    int items;
    const int qsize;

    //把复制构造函数与赋值运算符重载，显式声明于私有区
    //以防滥用，同时容易捕捉由于这二者被无意中调用引发的错误
    Queue(Queue & q):qsize(0){front=end=nullptr;items=0;};
    Queue & operator=(const Queue & q){return *this;};

    public:
    Queue();
    Queue(int qs=Q_SIZE);
    ~Queue();
    int count(){return items;};
    bool isfull(){return items==qsize;};
    bool isempty(){return items==0;};
    int itemcount(){return items;}
    bool jiadui(const Item &);
    bool deldui(Item &);
};
#endif