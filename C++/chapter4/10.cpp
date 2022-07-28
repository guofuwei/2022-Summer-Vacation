#include <iostream>

using namespace std;


int main()
{
  int int_val1=20;
  int int_val2=200;
  cout<<"int_val1:"<<int_val1<<endl;
  const int* p_int1=&int_val1;
//  *p_int1=10;
  int* const p_int2=&int_val1;
  *p_int2=10;
//  p_int2=&int_val2;
  cout<<"int_val1:"<<int_val1<<endl;
  return 0;
}
