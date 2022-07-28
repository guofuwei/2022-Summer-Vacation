#ifndef  __MYTIME4_H__
#define __MYTIME4_H__
#include <iostream>

class Time
{
  private:
    int hours;
    int minutes;
  public:
    Time();
    Time(int h,int m=0);
    void AddHr(int h);
    void AddMin(int m);
    void Reset(int h=0,int m=0);
    friend Time operator+(const Time &m,const Time &t);
    friend Time operator-(const Time &m,const Time &t);
    friend Time operator*(const Time &m,double n);
    friend Time operator*(double n,const Time &t){return t*n;};
    friend std::ostream& operator<<(std::ostream &os,const Time &t);
    //void Show() const;
};
#endif
