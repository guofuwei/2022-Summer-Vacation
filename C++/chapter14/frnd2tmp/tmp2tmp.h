#ifndef __TMP2TMP_H__
#define __TMP2TMP_H__ 
#include <iostream>

template <class T> void counts();
template <class T> void reports(T &);

template<class TT>
class HasFriend
{
  private:
    TT item_;
    static int ct_;
  public:
    HasFriend(const TT &t):item_(t){ct_++;}
    ~HasFriend(){ct_--;}
    friend void counts<TT>();
    friend void reports<>(HasFriend<TT> &t);
};

template<class T>
int HasFriend<T>::ct_=0;

template <class T>
void counts()
{
  std::cout<<"template size:"<<sizeof(HasFriend<T>)<<std::endl;
  std::cout<<"template counts:"<<HasFriend<T>::ct_<<std::endl;
}

template<class T>
void reports(T &t)
{
  std::cout<<"HasFriend<TT>.item:"<<t.item_<<std::endl;
}

#endif
