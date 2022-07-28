#include <iostream>

using namespace std;

double Sum(double (*arr)[4],int size);

int main()
{
  const char* chstr="Hello World!";
  double arr[2][4]={
    {
      12,34,56,10.5
    },
    {
      13,23.5,34.2,78.2
    }
  };
  double sum=Sum(arr, 2);
  cout<<"Sum:"<<sum<<endl;
}


double Sum(double (*arr)[4],int size)
{
  double sum=0;
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<4;j++)
    {
      sum+=arr[i][j];
    }
  }
  return sum;
}
