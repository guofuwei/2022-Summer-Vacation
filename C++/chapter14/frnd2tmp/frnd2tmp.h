#ifndef __FRND2TMP_H__
#define __FRND2TMP_H__
#include <iostream>


template<class T>
class HasFriend
{
  private:
    T item_;
    static int ct_;
  public:
    HasFriend(const T &t):item_(t){ct_++;}
    ~HasFriend(){ct_--;}
    friend void counts();
    friend void reports(HasFriend<T> &t);
};

template<class T>
int HasFriend<T>::ct_=0;

void counts()
{
  std::cout<<"int count:"<<HasFriend<int>::ct_<<std::endl;
  std::cout<<"double count:"<<HasFriend<double>::ct_<<std::endl;
}

void reports(HasFriend<int> &t)
{
  std::cout<<"HasFriend<int>:"<<t.item_<<std::endl;
}

void reports(HasFriend<double> &t)
{
  std::cout<<"HasFriend<double>:"<<t.item_<<std::endl;
}

#endif
