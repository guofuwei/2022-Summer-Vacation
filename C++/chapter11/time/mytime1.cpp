#include "mytime1.h"
#include <iostream>

using std::cout;
using std::endl;


Time::Time()
{
  hours=minutes=0;
}

Time::Time(int h,int m)
{
  hours=h;
  minutes=m;
}

void Time::AddHr(int h)
{
  hours+=h;
}

void Time::AddMin(int m)
{
  minutes+=m;
  hours+=minutes/60;
  minutes=minutes%60;
}

void Time::Reset(int h,int m)
{
  hours=h;
  minutes=m;
}

Time Time::operator+(const Time &t) const
{
  Time sum;
  sum.hours=hours+t.hours+(t.minutes+minutes)/60;
  sum.minutes=(minutes+t.minutes)%60;
  return sum;
}

void Time::Show() const
{
  cout<<hours<<" hours,"<<minutes<<" minutes"<<endl;
}
