#include <iostream>

using namespace std;

inline double mult(int x,int y=1,int z=1){return x*y*z;}
int main()
{
  cout<<"ret1:"<<mult(10)<<endl;
  cout<<"ret2:"<<mult(10,2)<<endl;
  cout<<"ret3:"<<mult(10,2,2)<<endl;

  return 0;
}
