#include <iostream>

using namespace std;

enum ENUM {blue=100,yellow,pink,hello,world};


int main()
{
  ENUM enum_test;
  int test=yellow;
  enum_test=blue;
  cout<<"enum_test:"<<enum_test<<endl;
  cout<<"test:"<<test<<endl;
  enum_test=world;
  cout<<"enum_test:"<<enum_test<<endl;
}
