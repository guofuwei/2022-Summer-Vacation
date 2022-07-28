#include <iostream>

using namespace std;

const int kMaxSize=100; 

int Fill_array(double* arr,int len);
void Show_array(const double* arr,int len);
void Reverse_array(double* arr,int len);

int main()
{
  double arr[kMaxSize];
  int act_size=Fill_array(arr,kMaxSize);
  Show_array(arr, act_size);

  cout<<"After Reverse array"<<endl;
  Reverse_array(arr,act_size);
  Show_array(arr, act_size);

  cout<<"After Reverse array except the first and last one"<<endl;
  Reverse_array(arr+1, act_size-2);
  Show_array(arr, act_size);
  return 0;
}

int Fill_array(double* arr,int len)
{
  int count=0;
  cout<<"Enter the num for arr,to stop type the no digits:";
  while(cin>>arr[count]&&count<len)
  {
    cout<<"Enter the num for arr,to stop type the no digits:";
    count++;
  }
  return count;
}

void Show_array(const double* arr,int len)
{
  for(int i=0;i<len;i++)
  {
    cout<<"The "<<i+1<<"num is "<<arr[i]<<endl;
  }
}

void Reverse_array(double* arr,int len)
{
  double tmp;
  for(int i=0;i<len/2;i++)
  {
    tmp=arr[i];
    arr[i]=arr[len-1-i];
    arr[len-1-i]=tmp;
  }
}
