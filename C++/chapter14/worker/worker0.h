#ifndef __WORKER0_H__
#define __WORKER0_H__
#include <string>

class Worker
{
  private:
    std::string fullname_;
    long id_;
  public:
    Worker():fullname_("none"),id_(0L){}
    Worker(const std::string &fullname,long id):fullname_(fullname),id_(id){}
    virtual ~Worker(){}
    virtual void Set();
    virtual void Show() const;
};

class Waiter:public Worker
{
  private:
    int panache_;
  public:
    Waiter():Worker(),panache_(0){}
    Waiter(const std::string &fullname,long id,int panache):\
      Worker(fullname,id),panache_(panache){}
    Waiter(const Worker &worker,int panache):Worker(worker),panache_(panache){}
    virtual void Set();
    virtual void Show() const;
};

class Singer:public Worker
{
  protected:
    enum {other,alto,contralto,soprano,bass,baritone,tenor};
    enum {vType=7};
  private:
    static std::string pv_[vType];
    int voice_;
  public:
    Singer():Worker(),voice_(other){}
    Singer(const std::string &fullname,long id,int voice):Worker(fullname,id),voice_(voice){}
    Singer(const Worker &worker,int voice):Worker(worker),voice_(voice){}
    virtual void Set();
    virtual void Show() const;
};

#endif
