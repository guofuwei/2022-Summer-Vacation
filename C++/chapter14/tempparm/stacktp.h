#ifndef __STACKTP_H__
#define __STACKTP_H__

template <class Type>
class Stack
{
  private:
    enum {kMAX=10};
    Type items_[kMAX];
    int top_;
  public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type &item);
    bool pop(Type &item);
};

template <class Type>
Stack<Type>::Stack()
{
  top_=0;
}

template <class Type>
bool Stack<Type>::isempty()
{
  return top_==0;
}

template <class Type>
bool Stack<Type>::isfull()
{
  return top_==kMAX;
}

template <class Type>
bool Stack<Type>::push(const Type &item)
{
  if(isfull())return false;
  items_[top_]=item;
  top_++;
  return true;
}

template <class Type>
bool Stack<Type>::pop(Type& item)
{
  if(isempty())return false;
  top_--;
  item=items_[top_];
  return true;
}
#endif
