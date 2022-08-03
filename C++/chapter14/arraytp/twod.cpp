#include "arraytp.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  ArrayTp<int, 10> sums;
  ArrayTp<double, 10> aves;
  ArrayTp<ArrayTp<int, 5>, 10> twodee;
  for(int i=0;i<10;i++)
  {
    sums[i]=0;
    for(int j=0;j<5;j++)
    {
      twodee[i][j]=(i+1)*(j+1);
      sums[i]+=twodee[i][j];
    }
    aves[i]=double(sums[i])/5;
  }

  for(int i=0;i<10;i++)
  {
    for(int j=0;j<5;j++)
    {
      cout.width(2);
      cout<<twodee[i][j]<<" ";
    }
    cout<<":sum=";
    cout.width(3);
    cout<<sums[i]<<",average="<<aves[i]<<endl;
  }
  cout<<"Done!"<<endl;

  return 0;
}
