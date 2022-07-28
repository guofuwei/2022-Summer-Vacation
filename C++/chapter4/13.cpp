#include <iostream>

using namespace std;

struct TestStruct
{
  int year;
};

int main()
{
  TestStruct test_struct[3]={
    {10},{20},{30}
  };
  cout<<"test_struct:"<<test_struct->year<<endl;
}
