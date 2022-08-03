#include "tmp2tmp.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  HasFriend<int> hfi1(10);
  HasFriend<int> hfi2(20);
  HasFriend<double> hfd1(10.5);
  reports(hfi1);
  reports(hfi2);
  reports(hfd1);
  cout<<"counts<int> output:"<<endl;
  counts<int>();
  cout<<"counts<double> output:"<<endl;
  counts<double>();
  
  return 0;
}
