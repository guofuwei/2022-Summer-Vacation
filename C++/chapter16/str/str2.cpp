#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
  string empty;
  string small="bit";
  string large="Elephants are a girl's best friend";
  cout<<"Size"<<endl;
  cout<<"\tempty:"<<empty.size()<<endl;
  cout<<"\tsmall:"<<small.size()<<endl;
  cout<<"\tlarge:"<<large.size()<<endl;

  cout<<"Capacity"<<endl;
  cout<<"\tempty:"<<empty.capacity()<<endl;
  cout<<"\tsmall:"<<small.capacity()<<endl;
  cout<<"\tlarge:"<<large.capacity()<<endl;

  empty.reserve(50);
  cout<<"After empty reserve 50:"<<empty.capacity()<<endl;
}
