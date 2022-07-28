#include "mytime4.h"
#include <iostream>
#include <ostream>

//using std::cout;
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

Time operator+(const Time &m,const Time &t) 
{
  Time sum;
  sum.hours=m.hours+t.hours+(t.minutes+m.minutes)/60;
  sum.minutes=(m.minutes+t.minutes)%60;
  return sum;
}

Time operator-(const Time &m,const Time &t) 
{
  Time sub;
  if(m.minutes<t.minutes)
  {
    sub.hours=m.hours-t.hours-1;
    sub.minutes=m.minutes+60-t.minutes;
  }
  else
  {
    sub.hours=m.hours-t.hours;
    sub.minutes=m.minutes-t.minutes;
  }
  return sub;
}

Time operator*(const Time &m,double n)
{
  Time mult;
  long totaltime=m.hours*60*n+m.minutes*n;
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
