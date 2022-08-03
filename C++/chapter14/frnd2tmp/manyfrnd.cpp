#ifndef __MANYFRND_H__
#define __MANYFRND_H__
#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class ManyFriend
{
  private:
    T item_;
  public:
    ManyFriend(const T &t):item_(t){}
    template<typename C,typename D>friend void show2(C &c,D &d);
};

template <typename C,typename D>
void show2(C &c,D &d)
{
  cout<<c.item_<<","<<d.item_<<endl;
}

int main()
{
  ManyFriend<int> hfi1(10);
  ManyFriend<int> hfi2(20);
  ManyFriend<double> hfdb(10.5);
  cout<<"show2(hfi1,hfi2):"<<endl;
  show2(hfi1,hfi2);
  cout<<"show2(hfdb,hfi2):"<<endl;
  show2(hfdb,hfi2);

  return 0;
}

#endif
