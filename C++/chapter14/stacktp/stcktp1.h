#ifndef __STCKTP1_H__
#define __STCKTP1_H__

template <class Type>
class Stack
{
  private:
    enum {SIZE=10};
    int stacksize_;
    Type* items_;
    int top_;
  public:
    explicit Stack(int size=SIZE);
    Stack(const Stack &st);
    ~Stack();
    bool isempty();
    bool isfull();
    bool push(const Type &item);
    bool pop(Type &item);
    Stack& operator=(const Stack& st);
};

template <class Type>
Stack<Type>::Stack(int size):stacksize_(size),top_(0)
{
  items_=new Type[size];
}

template <class Type>
Stack<Type>::Stack(const Stack &st)
{
  top_=st.top_;
  stacksize_=st.stacksize_;
  delete [] items_;
  items_=new Type[st.stacksize_];
  for(int i=0;i<top_;i++)
  {
    items_[i]=st.items_[i];
  }
}

template <class Type>
Stack<Type>::~Stack()
{
  delete [] items_;
}

template <class Type>
bool Stack<Type>::isempty()
{
  return top_==0;
}

template <class Type>
bool Stack<Type>::isfull()
{
  return top_==stacksize_;
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

template <class Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type> &st)
{
  if(&st==this)return *this;
  delete [] items_;
  top_=st.top_;
  stacksize_=st.stacksize_;
  items_=new Type[stacksize_];
  for(int i=0;i<top_;i++)
  {
    items_[i]=st.items_[i];
  }
  return *this;
}
#endif
