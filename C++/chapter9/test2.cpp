#include <iostream>

using std::cout;
using std::endl;

static int average(int x,int y)
{
  return (x+y)/2;
}

int main()
{
  cout<<"In file1.cpp average:"<<average(3, 6)<<endl;
}
