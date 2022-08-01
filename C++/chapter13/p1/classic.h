#ifndef __CLASSIC_H__
#define __CLASSIC_H__
class Cd
{
  private:
    char performers_[50];
    char label_[20];
    int selection_;
    double playtime_;
  public:
    Cd(const char* performers="none",const char* label="null",\
        int selection=0,double playtime=0);
    virtual ~Cd(){};
    virtual void Report() const;
};

class Classic:public Cd
{
  private:
    char* main_work_;
  public:
    Classic(const char* performers="none",const char* label="null",\
        int selection=0,double playtime=0,const char* main_work="null");
    Classic(const Cd &cd,const char* main_work="null");
    Classic(const Classic &classic);
    Classic& operator=(Classic &classic);
    virtual ~Classic();
    virtual void Report() const;
};
#endif

