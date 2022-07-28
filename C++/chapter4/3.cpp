#include <iostream>

using namespace std;

struct student{
  string name;
  int age;
  string classroom;
  string phone;
};

int main()
{
  student xiaoming={
    "Mike",
    18,
    "class 1",
    "1890922279"
  };
  student B=xiaoming;
  student C[100];
  C[0]={
    "Bob",
    20,
    "class 2",
    "178234299"
  };
  cout<<xiaoming.name<<" age is "<<xiaoming.age<<endl;
  return 0;
}
