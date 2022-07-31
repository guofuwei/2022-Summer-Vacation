#include "stack.h"


Stack::Stack(int n)
{
  pitems=new Item[n];
  size=n;
  top=0;
}

Stack::Stack(const Stack &st)
{
  pitems=new Item[st.size];
  size=st.size;
  top=st.top;
  for(int i=0;i<top;i++)
  {
    pitems[i]=st.pitems[i];
  }
}

Stack::~Stack()
{
  delete [] pitems;
}

bool Stack::isempty() const
{
  return top==0;
}

bool Stack::isfull() const
{
  return top==size;
}

bool Stack::push(const Item &item)
{
  if(isfull()){return false;}
  pitems[top]=item;
  top++;
  return true;
}
bool Stack::pull(Item &item)
{
  if(isempty()){return false;}
  top--;
  item=pitems[top];
  return true;
}

Stack& Stack::operator=(const Stack &st)
{
  if(&st==this)return *this;
  delete [] pitems;
  pitems=new Item[st.size];
  size=st.size;
  top=st.top;
  for(int i=0;i<size;i++)
  {
    pitems[i]=st.pitems[i];
  }
  return *this;
}
