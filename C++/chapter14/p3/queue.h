#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <iostream>
#include <cstdlib>

template <typename T>
class Queue
{
  private:
    struct Node{T* item;struct Node* next;};
    enum {Q_SIZE_=10};
    Node* front_;
    Node* rear_;
    int items_;
    const int qsize_;
    Queue(const Queue&):qsize_(0){}
    Queue& operator=(const Queue&){return *this;}

  public:
    Queue(int qsize=Q_SIZE_);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(T* item);
    bool dequeue(T* &item);
};



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
bool Queue<T>::enqueue(T* item)
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
  //std::cout<<new_node->item<<" enqueue!"<<std::endl;
  return true;
}

template <typename T>
bool Queue<T>::dequeue(T* &item)
{
  if(isempty())return false;
  items_--;
  // delete front_ memory
  item=front_->item;
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
#endif
