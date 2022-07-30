#ifndef __QUEUE_H__
#define __QUEUE_H__


class Costomer
{
  private:
    long arrive_;
    long processtime_;
  public:
    Costomer(){arrive_=processtime_=0;}
    void set(long when);
    long when() const{return arrive_;}
    int ptime() const{return processtime_;}
};

typedef Costomer Item;

class Queue
{
  private:
    struct Node{Item item;struct Node* next;};
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
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
};

#endif
