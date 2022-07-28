#include "mytime3.h"
#include <iostream>
#include <ostream>

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

Time Time::operator-(const Time &t) const
{
  Time sub;
  if(minutes<t.minutes)
  {
    sub.hours=hours-t.hours-1;
    sub.minutes=minutes+60-t.minutes;
  }
  else
  {
    sub.hours=hours-t.hours;
    sub.minutes=minutes-t.minutes;
  }
  return sub;
}

Time Time::operator*(double n) const
{
  Time mult;
  long totaltime=hours*60*n+minutes*n;
  mult.hours=totaltime/60;
  mult.minutes=totaltime%60;
  return mult;
}

std::ostream& operator<<(std::ostream &os,const Time &t)
{
  os<<t.hours<<" hours,"<<t.minutes<<" minutes"<<endl;
  return os;
}

//void Time::Show() const
//{
//  cout<<hours<<" hours,"<<minutes<<" minutes"<<endl;
//}
