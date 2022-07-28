#include <iostream>

using namespace std;

int ArrSum(int arr[],int len);

int main()
{
  int arr[]={1,2,33,45,24,454};
  int len=6;
  int sum=ArrSum(arr, len);
  cout<<"ArrSum:"<<sum<<endl;

  return 0;
}

int ArrSum(int arr[],int len)
{
  int sum=0;
  for(int i=0;i<len;i++)
  {
    sum+=arr[i];
  }
  return sum;
}
