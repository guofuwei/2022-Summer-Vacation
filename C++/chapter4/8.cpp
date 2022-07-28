#include <iostream>

using namespace std;

int main()
{
  int* p_int=new int;
  double* p_double=new double;
  *p_int=1000;
  *p_double=100.0;
  cout<<"p_int:"<<*p_int<<endl;
  cout<<"p_double:"<<*p_double<<endl;
  int* p_array=new int [10];
  for(int i=0;i<10;i++)
  {
    p_array[i]=i;
    cout<<p_array[i]<<endl;
  }
  cout<<"location of p_array:"<<p_array<<endl;
  p_array++;
  cout<<"location of p_array:"<<p_array<<endl;
  p_array--;
  int test_array[10];
  cout<<"sizeof test_array:"<<sizeof test_array<<endl;
  cout<<"sizeof &test_array:"<<sizeof &test_array<<endl;
  cout<<"location of &test_array:"<<&test_array<<endl;
  cout<<"location of test_array:"<<test_array<<endl;
  delete p_int;
  delete p_double;
  delete[] p_array;
  return 0;
}
