#include <iostream>

using namespace std;

template <typename T>
T max5(const T *arr)
{
  T max_num=arr[0];
  for(int i=1;i<5;i++)
  {
    if(arr[i]>max_num)
    {
      max_num=arr[i];
    }
  }
  return max_num;
}

int main()
{
  int arr_int[5]={1,23,45,78,0};
  double arr_double[5]={10.2,78.2,29.3,99.2,90.2};
  cout<<"int arr max num:"<<max5(arr_int)<<endl;
  cout<<"double arr max num:"<<max5(arr_double)<<endl;

  return 0;
}
