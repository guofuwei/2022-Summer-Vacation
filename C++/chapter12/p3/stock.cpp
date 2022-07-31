#include <ios>
#include <iostream>
#include <cstring>
#include <ostream>
#include "stock.h"

Stock::Stock()
{
  company_=nullptr;
  shares_=share_val_=total_val_=0;
}

Stock::Stock(const char* co, long n, double pr)
{
  std::cout<<"Constructor for "<<co<<" called!"<<std::endl;
  company_=new char[std::strlen(co)+1];
  std::strcpy(company_,co);
  if(n<0)
  {
    std::cout<<"Number of shares_ can't be negative;"
      <<company_<<" shares_ is set to 0;"<<std::endl;
    shares_=0;
  }
  else
  {
    shares_=n;
  }
  share_val_=pr;
  set_tot();
}

Stock::~Stock()
{
  std::cout<<"Bye "<<company_<<std::endl;
  delete [] company_;
}

void Stock::acquire(const char* co, long n, double pr)
{
  company_=new char[std::strlen(co)+1];
  std::strcpy(company_,co);
  if(n<0)
  {
    std::cout<<"Number of shares_ can't be negative;"
      <<company_<<" shares_ is set to 0;"<<std::endl;
    shares_=0;
  }
  else
  {
    shares_=n;
  }
  share_val_=pr;
  set_tot();
}

void Stock::buy(long num, double price)
{
  if(num<0)
  {
    std::cout<<"The shares_ can't be negative!"<<std::endl;
    std::cout<<"Buy shares_ failed!"<<std::endl;
  }
  else
  {
    shares_+=num;
    share_val_=price;
    set_tot();
    std::cout<<"Buy shares_ successed!"<<std::endl;
  }
}

void Stock::sell(long num, double price)
{
  if(num<0)
  {
    std::cout<<"The sell shares_ can't be negative!"<<std::endl;
    std::cout<<"Sell shares_ failed!"<<std::endl;
  }
  else if(num>shares_)
  {
    std::cout<<"The sell shares_ can't more than you have!"<<std::endl;
    std::cout<<"Sell shares_ failed!"<<std::endl;
  }
  else
  {
    shares_-=num;
    share_val_=price;
    set_tot();
    std::cout<<"Sell shares_ successed!"<<std::endl;
  }
}

void Stock::update(double price)
{
  if(price<0)
  {
    std::cout<<"price can't be negative!"<<std::endl;
    std::cout<<"Update price failed!"<<std::endl;
  }
  else
  {
    share_val_=price;
    set_tot();
    std::cout<<"Update price successed!"<<std::endl;
  }
}

void Stock::show() const
{
  std::cout<<std::endl;
  std::ios_base::fmtflags orig=std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  std::streamsize prec=std::cout.precision(3);
  //std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  //std::cout.precision(3);
  //set_tot();
  std::cout<<"Here is the stock info"<<std::endl;
  std::cout<<"company_:"<<company_<<std::endl;
  std::cout<<"shares Num:"<<shares_<<std::endl;
  std::cout<<"Share Price:$"<<share_val_<<std::endl;
  std::cout<<"Total Value:$"<<total_val_<<std::endl;
  std::cout.setf(orig,std::ios_base::floatfield);
  std::cout.precision(prec);
}

std::ostream& operator<<(std::ostream &os,const Stock &stock)
{
  os<<std::endl;
  std::ios_base::fmtflags orig=os.setf(std::ios_base::fixed,std::ios_base::floatfield);
  std::streamsize prec=os.precision(3);
  //os.setf(std::ios_base::fixed,std::ios_base::floatfield);
  //os.precision(3);
  //set_tot();
  os<<"Here is the stock info"<<std::endl;
  os<<"company_:"<<stock.company_<<std::endl;
  os<<"shares Num:"<<stock.shares_<<std::endl;
  os<<"Share Price:$"<<stock.share_val_<<std::endl;
  os<<"Total Value:$"<<stock.total_val_<<std::endl;
  os.setf(orig,std::ios_base::floatfield);
  os.precision(prec);
  return os;
}

const Stock& Stock::topval(const Stock &s) const
{
  return s.total_val_>this->total_val_?s:*this;
}
