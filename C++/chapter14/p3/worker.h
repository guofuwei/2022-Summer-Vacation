#ifndef __WORKER_H__
#define __WORKER_H__
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

#endif
