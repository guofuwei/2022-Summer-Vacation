#include "stack.h"


Stack::Stack()
{
  top=0;
}


bool Stack::isempty() const
{
  return top==0;
}

bool Stack::isfull() const
{
  return top==MAX;
}

bool Stack::push(const Item &item)
{
  if(isfull()){return false;}
  items_[top]=item;
  top++;
  return true;
}
bool Stack::pull(Item &item)
{
  if(isempty()){return false;}
  top--;
  item=items_[top];
  return true;
}
