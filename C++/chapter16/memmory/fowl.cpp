#include <iostream>
#include <memory>
#include <string>

//using std::auto_ptr;
using std::shared_ptr;
using std::cout;
using std::endl;
using std::string;

int main()
{
  shared_ptr<string> films[5] = {
    shared_ptr<string>(new string("Fowl Balls")),
    shared_ptr<string>(new string("Duck Walks")),
    shared_ptr<string>(new string("Chicken Runs")),
    shared_ptr<string>(new string("Turkey Errors")),
    shared_ptr<string>(new string("Goose Eggs"))
  };
  //auto_ptr<string> pwin;
  std::shared_ptr<string> pwin;
  pwin=films[2]; //files[2] lose ownership 
  cout<<"The nominees for best avian baseball film are\n";
  for(int i=0;i<5;i++)
  {
    cout<<*films[i]<<endl;
  }
  cout<<"The Winnner is "<<*pwin<<endl;
  std::cin.get();
  return 0;
}
