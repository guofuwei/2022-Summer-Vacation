#include "complex0.h"
#include <iostream>
#include <ostream>


complex::complex()
{
  i_=j_=0;
}

complex::complex(double i,double j)
{
  i_=i;
  j_=j;
}

std::istream& operator>>(std::istream &is,complex &n)
{
  is>>n.i_>>n.j_;
  return is;
}

std::ostream& operator<<(std::ostream &os,const complex &n)
{
  os<<"("<<n.i_<<","<<n.j_<<"i)";
  return os;
}

complex complex::operator+(const complex &m) const
{
  return complex(i_+m.i_,j_+m.j_);
}

complex complex::operator-(const complex &m) const
{
  return complex(i_-m.i_,j_-m.j_);
}

complex complex::operator*(double rate) const
{
  return complex(i_*rate,j_*rate);
}

complex complex::operator*(const complex &m) const
{
  return complex(i_*m.i_,j_*m.j_);
}

complex operator*(double rate,const complex &n)
{
  return n*rate;
}

complex operator~(const complex &n)
{
  return complex(-n.i_,-n.j_);
}

