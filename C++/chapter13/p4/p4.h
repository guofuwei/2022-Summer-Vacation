#ifndef __P4_H__
#define __P4_H__
#include <iostream>

class Port
{
  private:
    char* brand_;
    char style_[20];
    int bottles_;
  public:
    Port(const char* brand="null",const char* style="null",int bottles=0);
    Port(const Port &port);
    virtual ~Port();
    Port& operator=(const Port &port);
    Port& operator+=(int n);
    Port& operator-=(int n);
    int BottleCount(){return bottles_;}
    virtual void Show();
    friend std::ostream& operator<<(std::ostream &os,const Port &port);
};

class VintagePort:public Port
{
  private:
    char* fullname_;
    int year_;
  public:
    VintagePort(const char* brand="null",const char* style="null",int bottles=0,\
        const char* fullname="none",int year=-1);
    VintagePort(const Port &port,char* fullname,int year);
    VintagePort(const VintagePort& vport);
    virtual ~VintagePort();
    VintagePort& operator=(const VintagePort &vport);

    virtual void Show();
    friend std::ostream& operator<<(std::ostream &os,const VintagePort &vport);
};

#endif
