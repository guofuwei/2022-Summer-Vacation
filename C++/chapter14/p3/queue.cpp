#include "queue.h"
#include <iostream>
#include <cstdlib>


template <typename T>
Queue<T>::Queue(int qsize):qsize_(qsize)
{
  items_=0;
  front_=rear_=nullptr;
}

template <typename T>
Queue<T>::~Queue()
{
  Node* tmp;
  while(front_!=rear_)
  {
    tmp=front_;
    front_=front_->next;
    delete tmp;
  }
}  
 
template <typename T>
bool Queue<T>::isempty() const
{
  return items_==0;
}

template <typename T>
bool Queue<T>::isfull() const
{
  return items_==qsize_;
}

template <typename T>
int Queue<T>::queuecount() const
{
  return items_;
}

template <typename T>
bool Queue<T>::enqueue(const T item)
{
  if(isfull())return false;
  Node* new_node=new Node;
  new_node->item=item;
  new_node->next=nullptr;
  if(front_==nullptr)
  {
    front_=new_node;
  }
  else
  {
    rear_->next=new_node;
  }
  //std::cout<<"1"<<std::endl;
  rear_=new_node;
  items_++;
  return true;
}

template <typename T>
bool Queue<T>::dequeue(T item)
{
  if(isempty())return false;
  items_--;
  item=front_->item;
  // delete front_ memory
  Node* tmp=front_;
  if(front_->next==nullptr)
  {
    front_=rear_=nullptr; 
  }
  else
  {
    front_=front_->next; 
  }
  //delete tmp;
  return true;
}
