#include "p6.h"
#include <iostream>

using std::cout;
using std::endl;

Move::Move(double a,double b)
{
  x=a;
  y=b;
}

void Move::showmove() const
{
  cout<<"x = "<<x<<endl;
  cout<<"y = "<<y<<endl;
}

Move Move::add(const Move &m) const
{
  return Move(m.x+this->x,m.y+this->y);
}

void Move::reset(double a, double b)
{
  x=a;
  y=b;
}
