#include <cstdlib>
#include <iostream>
#include <new>

using std::cout;
using std::endl;

struct Big {
  double stuff[20000000];
};

int main()
{
  Big *pb;
  try{
    cout<<"Trying get a big block of memory"<<endl;
    pb=new Big[1000000];
    cout<<"get passwd the new request"<<endl;
  }
  catch(std::bad_alloc &ba)
  {
    cout<<"Caught the exception!"<<endl;
    cout<<ba.what()<<endl;
    std::exit(EXIT_FAILURE);
  }
  cout<<"Memeory successfully allocated!"<<endl;
  pb[0].stuff[0]=4;
  cout<<pb[0].stuff[0]<<endl;
  delete [] pb;
  return 0;
}
