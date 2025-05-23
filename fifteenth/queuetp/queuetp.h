//queuetp.h -- queue template with a nested class
#ifndef QUEUETP_H_
#define QUEUETP_H_

template<class Item>
class QueueTp
{
    private:
    enum{Q_SIZE=10};
    //Node is a nested class definition
    class Node
    {
        public:
        Item item;
        Node * next;
        Node(const Item & i):item(i),next(0){}
    };
    Node * front;   //pointer to front of Queue
    Node * rear;   //pointer to rear of Queue
    int items;  //current number of items in Queue
    const int qsize;  //maximum number of items in Queue
    QueueTp(const QueueTp & q):qsize(0){}
    QueueTp & operator=(const QueueTp &q){return *this;}

    public:
    QueueTp(int qs = Q_SIZE);
    ~QueueTp();
    bool isempty()const
    {
        return items==0;
    }

    bool isfull()const
    {
        return items == qsize;
    }

    int queuecount()const
    {
        return items;
    }
    
    bool enqueue(const Item & item);  //add item to end
    bool dequeue(Item & item);    //remove item from front
};

// Queue Tp methods
template<class Item>
QueueTp<Item>::QueueTp(int qs):qsize(qs)
{
    front = rear =0;
    items = 0;
}

template<class Item>
QueueTp<Item>::~QueueTp()
{
    Node * temp;
    while(front != 0)   // while queue is not yet empty
    {
        temp = front; // save address of front item
        front = front->next;  // reset pointer to next item
        delete temp;  // delete former front
    }
}

//Add item to queue
template<class Item>
bool QueueTp<Item>::enqueue(const Item & item)
{
    if(isfull())
    return false;
    Node * add = new Node(item);   //create node
    // on failure, new throws std::bad_alloc exception
    items++;
    if(front == 0)  // if queue is empty
    front=add; //place item at front
    else
    rear->next = add; //else place at rear
    rear=add;   //have rear point to new node
    return true;
}

//Place front item into item variable and remove from queue
template<class Item>
bool QueueTp<Item>::dequeue(Item & item)
{
    if(isempty())
    return false;
    item = front->item;
    Node * del;
    del = front;
    front = front->next;
    delete del;
    items--;
    if(items==0)
    rear=0;
    return true;
}

#endif