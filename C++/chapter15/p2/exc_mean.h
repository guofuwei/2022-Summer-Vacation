#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__
#include <iostream>
#include <stdexcept>

class BadHmean:public std::logic_error
{
  public:
    BadHmean():std::logic_error("hmean error: invalid argument:a=-b"){}
};
class BadGmean:public std::logic_error
{
  public:
    BadGmean():std::logic_error("gmean error: argument should be >=0"){}
};

#endif
