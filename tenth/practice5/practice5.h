#ifndef PRACTICE5_H_
#define PRACTICE5_H_
struct customer{
    char fullname[35];
    double payment;
};

typedef customer Items;
static int total = 0;
class Stack{
    private:
    enum{Max=10};
    Items items[Max];
    int top;

    public:
    Stack(){top=0;};
    bool isempty() const;
    bool isfull() const;
    bool push(const Items & item);
    bool pop(Items &item);
  
};
#endif