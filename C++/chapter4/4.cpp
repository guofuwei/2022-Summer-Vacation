#include <iostream>

using namespace std;

union UnionTest
{
  int int_val;
  long long_val;
  double double_val;
};

int main()
{
  UnionTest a;
  a.int_val=15;
  cout<<"sizeof(a):"<<sizeof(a)<<endl;
  cout<<"a.int_val:"<<a.int_val<<endl;
  cout<<"a.double_val:"<<a.double_val<<endl;
  a.double_val=20.04;
  cout<<"a.int_val:"<<a.int_val<<endl;
  cout<<"a.double_val:"<<a.double_val<<endl;
}
