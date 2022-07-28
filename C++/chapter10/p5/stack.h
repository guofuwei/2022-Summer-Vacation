#ifndef __STACK_H__
#define __STACK_H__

typedef struct customer{
  char fullname[35];
  double payment;
}Item;


class Stack
{
  private:
    enum {MAX=10};
    Item items_[MAX];
    double total_payment_;
    int top;
  public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pull(Item &item);
};
#endif
