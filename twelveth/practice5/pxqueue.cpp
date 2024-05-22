// queue.cpp  -- Queue and Customer methods
#include"pxqueue.h"
#include<cstdlib>    //(or stdlib.h) for rand()

// Queue methods
Queue::Queue(int qs):qsize(qs)
{
    front=rear=nullptr;
    items = 0;
}

Queue::~Queue()
{
    Node*temp; 
    while(front!=nullptr)   // while queue is not yet empty
    {
        temp = front;   // save address of front item
        front=front->next;  // reset pointer to next item
        delete temp;    // delete former front
    }
}

bool Queue::isempty()const
{
    return items==0;
}

bool Queue::isfull()const
{
    return items==qsize;
}

int Queue::queuecount()const
{
    return items;
}

// Add item to queue
bool Queue::enqueue(const Item & item)
{
    if(isfull())
    return false;
    Node * add = new Node;
    add->item=item;
    add->next=nullptr;
    items++;
    if(front==nullptr)
    front=add;
    else
    rear->next=add;    
    //注意如果 rear是空指针，rear->next将没有意义，所以需要else
    rear=add;
    return true;
}

// Place front item into item variable and remove from queue
bool Queue::dequeue(Item & item)
{
    if(isempty())
    return false;
    item = front->item;     //set item to first item in queue
    items--;
    Node * temp = front;    //save location of first item
    front=front->next;     //reset front to next item
    delete temp;          // delete former first item
    
    if(items==0)
    rear=nullptr;
    return true;
}

// time set to a random value in the range 1-3
void Customer::set(long when)
{
    processtime = std::rand()%3+1;
    arrive = when;
}