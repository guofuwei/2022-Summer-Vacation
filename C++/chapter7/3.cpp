#include <iostream>

using namespace std;

int ArrSum(const int* begin,const int* end);

int main()
{
  int arr[]={1,2,33,45,24,454};
  int len=6;
  int sum=ArrSum(arr, arr+len);
  cout<<"ArrSum:"<<sum<<endl;

  return 0;
}

int ArrSum(const int* begin,const int* end)
{
  int sum=0;
  for(const int* pt=begin;pt<end;pt++)
  {
    sum+=*pt;
  }
  return sum;
}
