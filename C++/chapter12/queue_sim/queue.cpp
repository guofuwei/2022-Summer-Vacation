#include "queue.h"
#include <iostream>
#include <cstdlib>


void Costomer::set(long when)
{
  arrive_=when;
  processtime_=std::rand()%3+1;
}

Queue::Queue(int qsize):qsize_(qsize)
{
  items_=0;
  front_=rear_=nullptr;
}

Queue::~Queue()
{
  Node* tmp;
  while(front_!=rear_)
  {
    tmp=front_;
    front_=front_->next;
    delete tmp;
  }
}  
 
bool Queue::isempty() const
{
  return items_==0;
}

bool Queue::isfull() const
{
  return items_==qsize_;
}

int Queue::queuecount() const
{
  return items_;
}

bool Queue::enqueue(const Item &item)
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

bool Queue::dequeue(Item &item)
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
  delete tmp;
  return true;
}
