#include <algorithm>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
int process(T arr[], int n);
template <typename T>
void show(const T& n,int m);

int main()
{
  int arr[] = { 1, 3, 3, 34, 124 };
  show(arr,5);
  int new_num=process(arr, 5);
  show(arr,new_num);

  return 0;
}

template <typename T>
int process(T arr[], int n)
{
  std::sort(arr, arr + n);
  auto past_end = std::unique(arr, arr + n);
  return past_end - arr;
}

template <typename T>
void show(const T& n, int m)
{
  for (int i = 0; i < m; i++)
    cout << n[i] << " ";
  cout<<endl;
}
