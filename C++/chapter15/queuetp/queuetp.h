#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <iostream>

template <class Item>
class QueueTP {
  private:
  enum { Q_SIZE_ = 10 };
  class Node {
public:
    Item item_;
    Node* next_;
    Node(const Item& item)
        : item_(item)
        , next_(nullptr)
    {
    }
  };
  Node* front_;
  Node* rear_;
  int items_;
  const int qsize_;
  QueueTP(const QueueTP&)
      : qsize_(0)
  {
  }
  QueueTP& operator=(const QueueTP&) { return *this; }

  public:
  QueueTP(int qsize = Q_SIZE_);
  ~QueueTP();
  bool isempty() const;
  bool isfull() const;
  int queuecount() const;
  bool enqueue(const Item& item);
  bool dequeue(Item& item);
};

template <class Item>
QueueTP<Item>::QueueTP(int qsize)
    : qsize_(qsize)
{
  items_ = 0;
  front_ = rear_ = nullptr;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
  Node* tmp;
  while (front_ != rear_) {
    tmp = front_;
    front_ = front_->next_;
    delete tmp;
  }
}

template <class Item>
bool QueueTP<Item>::isempty() const
{
  return items_ == 0;
}

template <class Item>
bool QueueTP<Item>::isfull() const
{
  return items_ == qsize_;
}

template <class Item>
int QueueTP<Item>::queuecount() const
{
  return items_;
}

template <class Item>
bool QueueTP<Item>::enqueue(const Item& item)
{
  if (isfull())
    return false;
  Node* new_node = new Node(item);
  // new_node->item=item;
  // new_node->next_=nullptr;
  if (front_ == nullptr) {
    front_ = new_node;
  } else {
    rear_->next_ = new_node;
  }
  rear_ = new_node;
  items_++;
  return true;
}

template <class Item>
bool QueueTP<Item>::dequeue(Item& item)
{
  if (isempty())
    return false;
  items_--;
  item = front_->item_;
  // delete front_ memory
  Node* tmp = front_;
  if (front_->next_ == nullptr) {
    front_ = rear_ = nullptr;
  } else {
    front_ = front_->next_;
  }
  delete tmp;
  return true;
}
#endif
