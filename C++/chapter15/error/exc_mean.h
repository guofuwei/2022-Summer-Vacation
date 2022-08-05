#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__
#include <iostream>

class BadHmean
{
  private:
    double v1_;
    double v2_;
  public:
    BadHmean(double v1,double v2):v1_(v1),v2_(v2){}
    void msg();
};

class BadGmean
{
  private:
    double v1_;
    double v2_;
  public:
    BadGmean(double v1,double v2):v1_(v1),v2_(v2){}
    void msg();
};

inline void BadHmean::msg()
{
  std::cout<<"hmean("<<v1_<<","<<v2_<<"):"
    <<"invalid argument:a=-b"<<std::endl;
}

inline void BadGmean::msg()
{
  std::cout<<"gmean argument should be >=0"<<std::endl;
}
#endif
