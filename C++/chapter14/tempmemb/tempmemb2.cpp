#include "tempmemb2.h"
#include <iostream>

using std::cout;
using std::endl;
//using std::cin;

int main()
{
  beta<double> guy(3.5,3);
  cout<<"T was set to double"<<endl;
  guy.Show();
  cout<<"V was set to T,which is double,then V was set to int"<<endl;
  cout<<guy.blab(10,2.3)<<endl;
  cout<<"U was set to int"<<endl;
  cout<<guy.blab(10.0,2.3)<<endl;
  cout<<"U was set to double"<<endl;
  cout<<"Done"<<endl;

  return 0;
}
