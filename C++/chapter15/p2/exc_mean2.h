#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__
#include <iostream>
#include <stdexcept>


class BadHmean:public std::logic_error
{
  public:
    BadHmean():std::logic_error(""){}
    const char* what() const noexcept override
    {
      return "hmean error: invalid argument:a=-b";
    }
};
class BadGmean:public std::logic_error
{
  public:
    BadGmean():std::logic_error(""){}
    virtual const char* what() const noexcept override
    {
      return "hgmean error: argument should be >=0";
    }
};

#endif
