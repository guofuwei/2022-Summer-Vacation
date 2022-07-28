#include <iostream>

using namespace std;

int main()
{
  int num1=10;
  int num2=20;
  int* pt=&num1;
  int& r_pt=*pt;
  cout<<"location of pt:"<<pt<<endl;
  cout<<"location of r_pt:"<<&r_pt<<endl;
  cout<<"location of num1:"<<&num1<<endl;
  cout<<"location of num2:"<<&num2<<endl;

  cout<<"After pt=&num2"<<endl;
  pt=&num2;
  cout<<"location of pt:"<<pt<<endl;
  cout<<"location of r_pt:"<<&r_pt<<endl;
  cout<<"location of num1:"<<&num1<<endl;
  cout<<"location of num2:"<<&num2<<endl;
}
