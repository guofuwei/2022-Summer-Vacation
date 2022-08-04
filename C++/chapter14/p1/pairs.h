#ifndef __PAIRS_H__
#define __PAIRS_H__
template <class T1,class T2>
class Pair
{
  private:
    T1 a;
    T2 b;
  public:
    Pair(){}
    Pair(const T1 &aval,const T2 &bval):a(aval),b(bval){}
    T1& first(){return a;}
    T2& second(){return b;}
    T1 first() const{return a;}
    T2 second() const{return b;}
};

#endif
