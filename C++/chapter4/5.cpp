#include <iostream>

using namespace std;

union UnionTest
{
  char ch;
  int int_val;
};

int main()
{
  UnionTest union_test;
  union_test.int_val=78;
  cout<<"union_test.ch:"<<union_test.ch<<endl;
  cout<<"union_test.int_val:"<<union_test.int_val<<endl;
  return 0;
}
