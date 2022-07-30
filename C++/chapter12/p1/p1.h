#ifndef __P1__
#define __P1__

class Cow
{
  private:
    char name[20];
    char* hobby;
    double weight;
  public:
    Cow();
    Cow(const char* nm,const char *hb,double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow& operator=(const Cow &c);
    void ShowCow() const;
};
#endif
