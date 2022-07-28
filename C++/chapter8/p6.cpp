#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[],int n);
template <>
string maxn(string arr[],int n);

int main()
{
  int int_arr[6]={1,2,3,4,5,6};
  double double_arr[4]={1.0,2.0,9.0,3.4};
  string p_char_arr[5]={
    "I love C++","I Love you!","Good morning","Hello world!","Python"
  };
  cout<<"int arr:"<<maxn(int_arr, 6)<<endl;
  cout<<"double arr:"<<maxn(double_arr,4)<<endl;
  cout<<"string arr:"<<maxn(p_char_arr,5)<<endl;

  cout<<"Done"<<endl;
  return 0;
}

template <typename T>
T maxn(T arr[],int n)
{
  //cout<<"begin"<<endl;
  T max_num=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]>arr[0])
    {
      max_num=arr[i];
    }
  }
  return max_num;
}

template <>
string maxn(string arr[],int n)
{
  int pos=0;
//  cout<<"Begin"<<endl;
  for(int i=1;i<n;i++)
  {
    //cout<<arr[i]<<endl;
    //cout<<strlen(arr[i])<<endl;
    if(arr[i].size()>arr[pos].size())
    {
      pos=i;
    }
  }
  return arr[pos];
}
