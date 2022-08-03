#ifndef __TEMPMEMB2_H__
#define __TEMPMEMB2_H__
#include <iostream>

template <class T>
class beta {
  private:
  template <class V>
  class hold;
  hold<T> q;
  hold<int> n;

  public:
  beta(T t,int i):q(t),n(i){}
  template <class U>
  U blab(U u,T t){return (q.value()+n.value())*u/t;}
  void Show() const{q.show();n.show();}
};

template<class T>
  template<class V>
  class beta<T>::hold {
  private:
    V val;
  public:
    hold(V v = 0)
        : val(v)
    {
    }
    void show() const { std::cout << val << std::endl; }
    V value() const { return val; }
  };
#endif
