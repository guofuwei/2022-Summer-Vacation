#include "complex0.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  complex a(3.0,4.0);

  complex c;
  cout<<"Enter a complex number(q to quit):";
  while(cin>>c)
  {
    cout<<"c = "<<c<<endl;
    cout<<"complex conjugate is "<<~c<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"a + c = "<<a+c<<endl;
    cout<<"a - c = "<<a-c<<endl;
    cout<<"a * c = "<<a*c<<endl;
    cout<<"2 * c = "<<2*c<<endl;
    cout<<"Enter a complex number(q to quit):";
  }
  cout<<"Done!"<<endl;
  return 0;
}
