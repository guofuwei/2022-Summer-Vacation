#include <iostream>
using namespace std;


int main()
{
  const string kMonths[12]={
    "January","February","March","April","May","June","July","August"
      ,"September","October","November","December"
  };
  int sale_table[12]={0};
  int sale_sum=0;
  for(int i=0;i<12;i++)
  {
    cout<<kMonths[i]<<":";
    cin>>sale_table[i];
    sale_sum+=sale_table[i];
  }
  cout<<"The total sale is "<<sale_sum<<endl;
  return 0;
}
