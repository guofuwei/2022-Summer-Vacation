#include <iostream>
#include <array>
#include <iostream>

using namespace std;

int main()
{ 
  array<double,10> donation;
  double sum=0;
  double average;
  int count=0;
  int input;
  cout<<"Enter 10 nums:"<<endl;
  while((cin>>input)&&count<10)
  {
//    cout<<"Enter the "<<count+1<<" num";
    donation[count++]=input;
    sum+=input;
  }
  average=sum/count;
  cout<<"The data count is "<<count<<endl;
  cout<<"The data sum is "<<sum<<endl;
  cout<<"The data average is "<<average<<endl;
  return 0;
}
