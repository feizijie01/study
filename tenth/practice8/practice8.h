#ifndef PRACTICE8_H_
#define PRACTICE8_H_
typedef double Item;
void pf(Item & i1);
class List
{
    private:
    int number;
    enum{Max=10};
    Item items[Max];
    public:
    List();
    void addList(Item & data);
    bool isfull();
    bool isempty();
    void visit(void(*pf)(Item &));
};
#endif