#include <iostream>

using namespace std;


int main()
{
  long long sum=0;
  int tmp;
  cin>>tmp;
  while(tmp!=0)
  {
    sum+=tmp;
    cout<<"sum:"<<sum<<endl;
    cin>>tmp;
  }
  return 0;
}
