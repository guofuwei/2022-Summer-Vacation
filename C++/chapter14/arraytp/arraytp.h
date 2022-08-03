#ifndef __ARRAYTP_H__
#define __ARRAYTP_H__

#include <cstdlib>
#include <iostream>

template <class T, int n>
class ArrayTp {
  private:
  T arr_[n];

  public:
  ArrayTp() { }
  explicit ArrayTp(const T& v);
  virtual T& operator[](int i);
  virtual T operator[](int i) const;
};

template <class T, int n>
ArrayTp<T, n>::ArrayTp(const T& v)
{
  for (int i = 0; i < n; i++) {
    arr_[n] = v;
  }
}

template <class T, int n>
T& ArrayTp<T, n>::operator[](int i)
{
  if (i < 0 || i >= n) {
    std::cerr << "Error in array limits:" << i << "is out of range\n";
    std::exit(EXIT_FAILURE);
  }
  return arr_[i];
}

template <class T, int n>
T ArrayTp<T, n>::operator[](int i) const
{
  if (i < 0 || i >= n) {
    std::cerr << "Error in array limits:" << i << "is out of range\n";
    std::exit(EXIT_FAILURE);
  }
  return arr_[i];
}
#endif
