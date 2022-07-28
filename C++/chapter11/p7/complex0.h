#ifndef __COMPLEX0_H__
#define __COMPLEX0_H__
#include <iostream>
#include <istream>
#include <ostream>

class complex
{
  private:
    double i_;
    double j_;
  public:
    complex();
    complex(double i,double j);
    friend std::istream& operator>>(std::istream &is,complex &n);
    friend std::ostream& operator<<(std::ostream &os,const complex &n);
    complex operator+(const complex &m) const;
    complex operator-(const complex &m) const;
    complex operator*(const complex &m) const;
    complex operator*(double rate) const;
    friend complex operator*(double rate,const complex &n);
    friend complex operator~(const complex &n);
};

#endif
