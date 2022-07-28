#include <iostream>


using namespace std;

double Cube(double x);
double RefCube(const double& x);

int main()
{
  double x=3;
  cout<<"Cube "<< x<<"="<<Cube(x)<<endl;  
  cout<<"RefCube "<<x+3<<"="<<RefCube(x+3)<<endl;
  cout<<x<<endl;
}


double Cube(double x)
{
  x *= x*x;
  return x;
}
double RefCube(const double& x)
{
  return x*x*x;
}
