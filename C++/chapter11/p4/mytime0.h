#ifndef  __MYTIME0_H__
#define __MYTIME0_H__

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
    Time Sum(const Time &t) const;
    void Show() const;
};
#endif
