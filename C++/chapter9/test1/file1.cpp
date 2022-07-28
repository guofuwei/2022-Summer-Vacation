#include <iostream>
#include "test2.h"
using namespace std;


string file1_str="I come from file1";

static string file1_static_str="I am static string come from file1";

int main()
{
  cout<<"file1_str:"<<file1_str<<endl;
  cout<<"file1_static_str:"<<file1_static_str<<endl;
  PrintFile2();
  return 0;
}
