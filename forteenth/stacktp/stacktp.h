// stacktp.h -- a stack template
#ifndef STACKTP_H_
#define STACKTP_H_
template<class Type>
class Stack
{
    private:
    enum{MAX=10};   //constant specific to class
    Type items[MAX];  // holds stack items
    int top;  // index for top stack item
    public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type & item);   //add item to stack
    bool pop(Type & item);  // pop top into item
};


template<class Type>
Stack<Type>::Stack()
{
    top=0;
}

template<class Type>
bool Stack<Type>::isempty()
{
    return top==0;
}

template<class Type>
bool Stack<Type>::isfull()
{
    return top==MAX;
}

template<class Type>
bool Stack<Type>::push(const Type & item)
{
    if(isfull())
    return false;
    else
    {
        items[top++]=item;
        return true;
    }
}

template<class Type>
bool Stack<Type>::pop(Type & item)
{
    if(isempty())
    return false;
    else
    {
        item=items[--top];
        return true;
    }
}

#endif