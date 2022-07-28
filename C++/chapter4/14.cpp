#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
  vector<int> test(10);
  array<int,5> test2;
  cout<<"location of test:"<<&test<<endl;
  cout<<"location of test2:"<<&test2<<endl;
}

