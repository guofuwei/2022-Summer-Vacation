#include "frnd2tmp.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  cout<<"No objects declared"<<endl;
  counts();
  HasFriend<int> hfi1(10);
  cout<<"After hfi1 declared"<<endl;
  counts();
  HasFriend<int> hfi2(20);
  cout<<"After hfi2 declared"<<endl;
  counts();
  HasFriend<double> hfd1(10.5);
  cout<<"After hfd1 declared"<<endl;
  counts();
  reports(hfi1);
  reports(hfi2);
  reports(hfd1);
  
  return 0;
}
