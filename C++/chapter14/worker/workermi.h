#ifndef __WORKERMI_H__
#define __WORKERMI_H__
#include <string>

class Worker
{
  private:
    std::string fullname_;
    long id_;
  protected:
    virtual void Data() const;
    virtual void Get();
  public:
    Worker():fullname_("none"),id_(0L){}
    Worker(const std::string &fullname,long id):fullname_(fullname),id_(id){}
    virtual ~Worker()=0;
    virtual void Set()=0;
    virtual void Show() const=0;
};

class Waiter:virtual public Worker
{
  private:
    int panache_;
  protected:
    virtual void Data() const;
    virtual void Get();
  public:
    Waiter():Worker(),panache_(0){}
    Waiter(const std::string &fullname,long id,int panache=0):\
      Worker(fullname,id),panache_(panache){}
    Waiter(const Worker &worker,int panache=0):Worker(worker),panache_(panache){}
    virtual void Set();
    virtual void Show() const;
};

class Singer:virtual public Worker
{
  protected:
    enum {other,alto,contralto,soprano,bass,baritone,tenor};
    enum {vType=7};
    virtual void Data() const;
    virtual void Get();
  private:
    static std::string pv_[vType];
    int voice_;
  public:
    Singer():Worker(),voice_(other){}
    Singer(const std::string &fullname,long id,int voice=other):Worker(fullname,id),voice_(voice){}
    Singer(const Worker &worker,int voice=other):Worker(worker),voice_(voice){}
    virtual void Set();
    virtual void Show() const;
};

class SingerWaiter:public Waiter,public Singer
{
  protected:
    virtual void Data() const;
    virtual void Get();
  public:
    SingerWaiter():Worker(),Waiter(),Singer(){}
    SingerWaiter(const std::string &fullname,long id,int panache=0,int voice=other):\
      Worker(fullname,id),Waiter(fullname,id,panache),Singer(fullname,id,voice){}
    SingerWaiter(const Worker &worker,int panache=0,int voice=other):\
      Worker(worker),Waiter(worker,panache),Singer(worker,voice){}
    SingerWaiter(const Waiter &waiter,int voice=other):\
      Worker(waiter),Waiter(waiter),Singer(waiter,voice){}
    SingerWaiter(const Singer &singer,int voice=other):\
      Worker(singer),Waiter(singer),Singer(singer,voice){}
    virtual void Set();
    virtual void Show() const;
};
#endif
