#include <iostream>

using namespace std;

int main()
{
  int a,b;
  cin>>a;
  cin.clear();// reset cin
  while(cin.get()!='\n');
  cin>>b;
  cout<<"a:"<<a<<endl;
  cout<<"b:"<<b<<endl;
}
